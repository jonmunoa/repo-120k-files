// fichero 14226 -- macros y constantes -- MODIFICADO
#define LIMITE_14226 14426
#define FACTOR_14226 3

int aplicar_limite14226(int valor) {
    if (valor > LIMITE_14226) return LIMITE_14226;
    return valor * FACTOR_14226;
}
