// fichero 32226 -- macros y constantes -- MODIFICADO
#define LIMITE_32226 32426
#define FACTOR_32226 3

int aplicar_limite32226(int valor) {
    if (valor > LIMITE_32226) return LIMITE_32226;
    return valor * FACTOR_32226;
}
