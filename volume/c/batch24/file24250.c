// fichero 24250 -- macros y constantes
#define LIMITE_24250 24350
#define FACTOR_24250 1

int aplicar_limite24250(int valor) {
    if (valor > LIMITE_24250) return LIMITE_24250;
    return valor * FACTOR_24250;
}
