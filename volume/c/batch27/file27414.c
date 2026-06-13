// fichero 27414 -- macros y constantes
#define LIMITE_27414 27514
#define FACTOR_27414 5

int aplicar_limite27414(int valor) {
    if (valor > LIMITE_27414) return LIMITE_27414;
    return valor * FACTOR_27414;
}
