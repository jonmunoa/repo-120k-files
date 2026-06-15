// fichero 8194 -- macros y constantes -- MODIFICADO
#define LIMITE_8194 8394
#define FACTOR_8194 6

int aplicar_limite8194(int valor) {
    if (valor > LIMITE_8194) return LIMITE_8194;
    return valor * FACTOR_8194;
}
