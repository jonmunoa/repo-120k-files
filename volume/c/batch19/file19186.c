// fichero 19186 -- macros y constantes -- MODIFICADO
#define LIMITE_19186 19386
#define FACTOR_19186 3

int aplicar_limite19186(int valor) {
    if (valor > LIMITE_19186) return LIMITE_19186;
    return valor * FACTOR_19186;
}
