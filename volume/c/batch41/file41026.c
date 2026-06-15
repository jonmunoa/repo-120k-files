// fichero 41026 -- macros y constantes -- MODIFICADO
#define LIMITE_41026 41226
#define FACTOR_41026 3

int aplicar_limite41026(int valor) {
    if (valor > LIMITE_41026) return LIMITE_41026;
    return valor * FACTOR_41026;
}
