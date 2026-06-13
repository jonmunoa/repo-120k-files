// fichero 23290 -- macros y constantes
#define LIMITE_23290 23390
#define FACTOR_23290 1

int aplicar_limite23290(int valor) {
    if (valor > LIMITE_23290) return LIMITE_23290;
    return valor * FACTOR_23290;
}
