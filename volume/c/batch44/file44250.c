// fichero 44250 -- macros y constantes
#define LIMITE_44250 44350
#define FACTOR_44250 1

int aplicar_limite44250(int valor) {
    if (valor > LIMITE_44250) return LIMITE_44250;
    return valor * FACTOR_44250;
}
