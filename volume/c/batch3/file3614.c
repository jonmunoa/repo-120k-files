// fichero 3614 -- macros y constantes
#define LIMITE_3614 3714
#define FACTOR_3614 5

int aplicar_limite3614(int valor) {
    if (valor > LIMITE_3614) return LIMITE_3614;
    return valor * FACTOR_3614;
}
