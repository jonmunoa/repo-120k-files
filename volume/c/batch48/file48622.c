// fichero 48622 -- macros y constantes
#define LIMITE_48622 48722
#define FACTOR_48622 3

int aplicar_limite48622(int valor) {
    if (valor > LIMITE_48622) return LIMITE_48622;
    return valor * FACTOR_48622;
}
