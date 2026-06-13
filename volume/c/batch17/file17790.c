// fichero 17790 -- macros y constantes
#define LIMITE_17790 17890
#define FACTOR_17790 1

int aplicar_limite17790(int valor) {
    if (valor > LIMITE_17790) return LIMITE_17790;
    return valor * FACTOR_17790;
}
