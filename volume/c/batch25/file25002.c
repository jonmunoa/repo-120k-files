// fichero 25002 -- macros y constantes
#define LIMITE_25002 25102
#define FACTOR_25002 3

int aplicar_limite25002(int valor) {
    if (valor > LIMITE_25002) return LIMITE_25002;
    return valor * FACTOR_25002;
}
