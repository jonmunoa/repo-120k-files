// fichero 20290 -- macros y constantes
#define LIMITE_20290 20390
#define FACTOR_20290 1

int aplicar_limite20290(int valor) {
    if (valor > LIMITE_20290) return LIMITE_20290;
    return valor * FACTOR_20290;
}
