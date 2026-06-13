// fichero 44374 -- macros y constantes
#define LIMITE_44374 44474
#define FACTOR_44374 5

int aplicar_limite44374(int valor) {
    if (valor > LIMITE_44374) return LIMITE_44374;
    return valor * FACTOR_44374;
}
