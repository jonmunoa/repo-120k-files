// fichero 15222 -- macros y constantes
#define LIMITE_15222 15322
#define FACTOR_15222 3

int aplicar_limite15222(int valor) {
    if (valor > LIMITE_15222) return LIMITE_15222;
    return valor * FACTOR_15222;
}
