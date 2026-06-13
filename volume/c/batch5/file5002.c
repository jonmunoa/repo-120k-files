// fichero 5002 -- macros y constantes
#define LIMITE_5002 5102
#define FACTOR_5002 3

int aplicar_limite5002(int valor) {
    if (valor > LIMITE_5002) return LIMITE_5002;
    return valor * FACTOR_5002;
}
