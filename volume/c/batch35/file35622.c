// fichero 35622 -- macros y constantes
#define LIMITE_35622 35722
#define FACTOR_35622 3

int aplicar_limite35622(int valor) {
    if (valor > LIMITE_35622) return LIMITE_35622;
    return valor * FACTOR_35622;
}
