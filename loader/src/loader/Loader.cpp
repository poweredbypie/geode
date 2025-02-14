#include "LoaderImpl.hpp"

using namespace geode::prelude;

Loader::Loader() : m_impl(new Impl) {}

Loader::~Loader() {}

Loader* Loader::get() {
    static auto g_geode = new Loader;
    return g_geode;
}

void Loader::createDirectories() {
    return m_impl->createDirectories();
}

void Loader::updateModResources(Mod* mod) {
    return m_impl->updateModResources(mod);
}

void Loader::addSearchPaths() {
    return m_impl->addSearchPaths();
}

Result<> Loader::saveData() {
    return m_impl->saveData();
}

Result<> Loader::loadData() {
    return m_impl->loadData();
}

VersionInfo Loader::getVersion() {
    return m_impl->getVersion();
}

VersionInfo Loader::minModVersion() {
    return m_impl->minModVersion();
}

VersionInfo Loader::maxModVersion() {
    return m_impl->maxModVersion();
}

bool Loader::isModVersionSupported(VersionInfo const& version) {
    return m_impl->isModVersionSupported(version);
}

Loader::LoadingState Loader::getLoadingState() {
    return m_impl->m_loadingState;
}

bool Loader::isModInstalled(std::string const& id) const {
    return m_impl->isModInstalled(id);
}

Mod* Loader::getInstalledMod(std::string const& id) const {
    return m_impl->getInstalledMod(id);
}

bool Loader::isModLoaded(std::string const& id) const {
    return m_impl->isModLoaded(id);
}

Mod* Loader::getLoadedMod(std::string const& id) const {
    return m_impl->getLoadedMod(id);
}

std::vector<Mod*> Loader::getAllMods() {
    return m_impl->getAllMods();
}

std::vector<LoadProblem> Loader::getProblems() const {
    return m_impl->getProblems();
}

void Loader::updateResources() {
    return m_impl->updateResources();
}

void Loader::updateResources(bool forceReload) {
    return m_impl->updateResources(forceReload);
}

void Loader::queueInMainThread(ScheduledFunction func) {
    return m_impl->queueInMainThread(func);
}

void Loader::waitForModsToBeLoaded() {
    return m_impl->waitForModsToBeLoaded();
}

void Loader::openPlatformConsole() {
    return m_impl->openPlatformConsole();
}

void Loader::closePlatformConsole() {
    return m_impl->closePlatformConsole();
}

bool Loader::didLastLaunchCrash() const {
    return m_impl->didLastLaunchCrash();
}

Mod* Loader::takeNextMod() {
    return m_impl->takeNextMod();
}

bool Loader::userTriedToLoadDLLs() const {
    return m_impl->userTriedToLoadDLLs();
}
