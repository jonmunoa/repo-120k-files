// fichero 6218 -- macros y constantes
#define LIMITE_6218 6318
#define FACTOR_6218 4

int aplicar_limite6218(int valor) {
    if (valor > LIMITE_6218) return LIMITE_6218;
    return valor * FACTOR_6218;
}
