// fichero 226 -- macros y constantes -- MODIFICADO
#define LIMITE_226 426
#define FACTOR_226 3

int aplicar_limite226(int valor) {
    if (valor > LIMITE_226) return LIMITE_226;
    return valor * FACTOR_226;
}
