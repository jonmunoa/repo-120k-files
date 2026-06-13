// fichero 16466 -- macros y constantes
#define LIMITE_16466 16566
#define FACTOR_16466 2

int aplicar_limite16466(int valor) {
    if (valor > LIMITE_16466) return LIMITE_16466;
    return valor * FACTOR_16466;
}
