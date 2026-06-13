// fichero 48374 -- macros y constantes
#define LIMITE_48374 48474
#define FACTOR_48374 5

int aplicar_limite48374(int valor) {
    if (valor > LIMITE_48374) return LIMITE_48374;
    return valor * FACTOR_48374;
}
