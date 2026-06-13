// fichero 28466 -- macros y constantes
#define LIMITE_28466 28566
#define FACTOR_28466 2

int aplicar_limite28466(int valor) {
    if (valor > LIMITE_28466) return LIMITE_28466;
    return valor * FACTOR_28466;
}
