// fichero 7222 -- macros y constantes -- MODIFICADO
#define LIMITE_7222 7422
#define FACTOR_7222 4

int aplicar_limite7222(int valor) {
    if (valor > LIMITE_7222) return LIMITE_7222;
    return valor * FACTOR_7222;
}
