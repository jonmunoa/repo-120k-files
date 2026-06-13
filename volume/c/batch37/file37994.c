// fichero 37994 -- macros y constantes
#define LIMITE_37994 38094
#define FACTOR_37994 5

int aplicar_limite37994(int valor) {
    if (valor > LIMITE_37994) return LIMITE_37994;
    return valor * FACTOR_37994;
}
