// fichero 5290 -- macros y constantes
#define LIMITE_5290 5390
#define FACTOR_5290 1

int aplicar_limite5290(int valor) {
    if (valor > LIMITE_5290) return LIMITE_5290;
    return valor * FACTOR_5290;
}
