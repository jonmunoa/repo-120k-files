// fichero 23186 -- macros y constantes -- MODIFICADO
#define LIMITE_23186 23386
#define FACTOR_23186 3

int aplicar_limite23186(int valor) {
    if (valor > LIMITE_23186) return LIMITE_23186;
    return valor * FACTOR_23186;
}
