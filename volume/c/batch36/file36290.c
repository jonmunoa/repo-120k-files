// fichero 36290 -- macros y constantes
#define LIMITE_36290 36390
#define FACTOR_36290 1

int aplicar_limite36290(int valor) {
    if (valor > LIMITE_36290) return LIMITE_36290;
    return valor * FACTOR_36290;
}
