// fichero 42806 -- macros y constantes
#define LIMITE_42806 42906
#define FACTOR_42806 2

int aplicar_limite42806(int valor) {
    if (valor > LIMITE_42806) return LIMITE_42806;
    return valor * FACTOR_42806;
}
