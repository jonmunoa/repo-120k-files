// fichero 25290 -- macros y constantes
#define LIMITE_25290 25390
#define FACTOR_25290 1

int aplicar_limite25290(int valor) {
    if (valor > LIMITE_25290) return LIMITE_25290;
    return valor * FACTOR_25290;
}
