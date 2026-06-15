// fichero 14222 -- macros y constantes -- MODIFICADO
#define LIMITE_14222 14422
#define FACTOR_14222 4

int aplicar_limite14222(int valor) {
    if (valor > LIMITE_14222) return LIMITE_14222;
    return valor * FACTOR_14222;
}
