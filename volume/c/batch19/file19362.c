// fichero 19362 -- macros y constantes
#define LIMITE_19362 19462
#define FACTOR_19362 3

int aplicar_limite19362(int valor) {
    if (valor > LIMITE_19362) return LIMITE_19362;
    return valor * FACTOR_19362;
}
