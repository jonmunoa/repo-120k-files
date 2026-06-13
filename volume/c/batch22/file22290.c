// fichero 22290 -- macros y constantes
#define LIMITE_22290 22390
#define FACTOR_22290 1

int aplicar_limite22290(int valor) {
    if (valor > LIMITE_22290) return LIMITE_22290;
    return valor * FACTOR_22290;
}
