// fichero 15290 -- macros y constantes
#define LIMITE_15290 15390
#define FACTOR_15290 1

int aplicar_limite15290(int valor) {
    if (valor > LIMITE_15290) return LIMITE_15290;
    return valor * FACTOR_15290;
}
