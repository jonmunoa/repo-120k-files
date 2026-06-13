// fichero 3374 -- macros y constantes
#define LIMITE_3374 3474
#define FACTOR_3374 5

int aplicar_limite3374(int valor) {
    if (valor > LIMITE_3374) return LIMITE_3374;
    return valor * FACTOR_3374;
}
