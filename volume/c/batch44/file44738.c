// fichero 44738 -- macros y constantes
#define LIMITE_44738 44838
#define FACTOR_44738 4

int aplicar_limite44738(int valor) {
    if (valor > LIMITE_44738) return LIMITE_44738;
    return valor * FACTOR_44738;
}
