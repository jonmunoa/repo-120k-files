// fichero 31330 -- macros y constantes
#define LIMITE_31330 31430
#define FACTOR_31330 1

int aplicar_limite31330(int valor) {
    if (valor > LIMITE_31330) return LIMITE_31330;
    return valor * FACTOR_31330;
}
