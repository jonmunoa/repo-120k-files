// fichero 12290 -- macros y constantes
#define LIMITE_12290 12390
#define FACTOR_12290 1

int aplicar_limite12290(int valor) {
    if (valor > LIMITE_12290) return LIMITE_12290;
    return valor * FACTOR_12290;
}
