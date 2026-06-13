// fichero 14290 -- macros y constantes
#define LIMITE_14290 14390
#define FACTOR_14290 1

int aplicar_limite14290(int valor) {
    if (valor > LIMITE_14290) return LIMITE_14290;
    return valor * FACTOR_14290;
}
