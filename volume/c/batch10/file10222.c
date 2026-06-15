// fichero 10222 -- macros y constantes -- MODIFICADO
#define LIMITE_10222 10422
#define FACTOR_10222 4

int aplicar_limite10222(int valor) {
    if (valor > LIMITE_10222) return LIMITE_10222;
    return valor * FACTOR_10222;
}
