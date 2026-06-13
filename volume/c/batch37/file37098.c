// fichero 37098 -- macros y constantes
#define LIMITE_37098 37198
#define FACTOR_37098 4

int aplicar_limite37098(int valor) {
    if (valor > LIMITE_37098) return LIMITE_37098;
    return valor * FACTOR_37098;
}
