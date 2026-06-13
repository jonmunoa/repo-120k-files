// fichero 46994 -- macros y constantes
#define LIMITE_46994 47094
#define FACTOR_46994 5

int aplicar_limite46994(int valor) {
    if (valor > LIMITE_46994) return LIMITE_46994;
    return valor * FACTOR_46994;
}
