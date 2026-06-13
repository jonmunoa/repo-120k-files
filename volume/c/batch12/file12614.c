// fichero 12614 -- macros y constantes
#define LIMITE_12614 12714
#define FACTOR_12614 5

int aplicar_limite12614(int valor) {
    if (valor > LIMITE_12614) return LIMITE_12614;
    return valor * FACTOR_12614;
}
