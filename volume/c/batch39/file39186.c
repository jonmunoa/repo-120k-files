// fichero 39186 -- macros y constantes -- MODIFICADO
#define LIMITE_39186 39386
#define FACTOR_39186 3

int aplicar_limite39186(int valor) {
    if (valor > LIMITE_39186) return LIMITE_39186;
    return valor * FACTOR_39186;
}
