// fichero 27958 -- macros y constantes
#define LIMITE_27958 28058
#define FACTOR_27958 4

int aplicar_limite27958(int valor) {
    if (valor > LIMITE_27958) return LIMITE_27958;
    return valor * FACTOR_27958;
}
