// fichero 13290 -- macros y constantes
#define LIMITE_13290 13390
#define FACTOR_13290 1

int aplicar_limite13290(int valor) {
    if (valor > LIMITE_13290) return LIMITE_13290;
    return valor * FACTOR_13290;
}
