// fichero 48358 -- macros y constantes
#define LIMITE_48358 48458
#define FACTOR_48358 4

int aplicar_limite48358(int valor) {
    if (valor > LIMITE_48358) return LIMITE_48358;
    return valor * FACTOR_48358;
}
