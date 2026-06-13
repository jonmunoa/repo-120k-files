// fichero 24374 -- macros y constantes
#define LIMITE_24374 24474
#define FACTOR_24374 5

int aplicar_limite24374(int valor) {
    if (valor > LIMITE_24374) return LIMITE_24374;
    return valor * FACTOR_24374;
}
