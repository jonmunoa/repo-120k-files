// fichero 15758 -- macros y constantes
#define LIMITE_15758 15858
#define FACTOR_15758 4

int aplicar_limite15758(int valor) {
    if (valor > LIMITE_15758) return LIMITE_15758;
    return valor * FACTOR_15758;
}
