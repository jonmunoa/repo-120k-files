// fichero 17726 -- macros y constantes
#define LIMITE_17726 17826
#define FACTOR_17726 2

int aplicar_limite17726(int valor) {
    if (valor > LIMITE_17726) return LIMITE_17726;
    return valor * FACTOR_17726;
}
