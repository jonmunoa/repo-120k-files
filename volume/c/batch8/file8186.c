// fichero 8186 -- macros y constantes
#define LIMITE_8186 8286
#define FACTOR_8186 2

int aplicar_limite8186(int valor) {
    if (valor > LIMITE_8186) return LIMITE_8186;
    return valor * FACTOR_8186;
}
