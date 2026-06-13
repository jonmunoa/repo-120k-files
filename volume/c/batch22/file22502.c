// fichero 22502 -- macros y constantes
#define LIMITE_22502 22602
#define FACTOR_22502 3

int aplicar_limite22502(int valor) {
    if (valor > LIMITE_22502) return LIMITE_22502;
    return valor * FACTOR_22502;
}
