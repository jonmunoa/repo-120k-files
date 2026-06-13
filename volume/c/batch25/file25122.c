// fichero 25122 -- macros y constantes
#define LIMITE_25122 25222
#define FACTOR_25122 3

int aplicar_limite25122(int valor) {
    if (valor > LIMITE_25122) return LIMITE_25122;
    return valor * FACTOR_25122;
}
