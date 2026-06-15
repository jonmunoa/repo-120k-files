// fichero 37098 -- macros y constantes -- MODIFICADO
#define LIMITE_37098 37298
#define FACTOR_37098 5

int aplicar_limite37098(int valor) {
    if (valor > LIMITE_37098) return LIMITE_37098;
    return valor * FACTOR_37098;
}
