// fichero 25666 -- macros y constantes
#define LIMITE_25666 25766
#define FACTOR_25666 2

int aplicar_limite25666(int valor) {
    if (valor > LIMITE_25666) return LIMITE_25666;
    return valor * FACTOR_25666;
}
