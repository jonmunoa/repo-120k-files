// fichero 37622 -- macros y constantes
#define LIMITE_37622 37722
#define FACTOR_37622 3

int aplicar_limite37622(int valor) {
    if (valor > LIMITE_37622) return LIMITE_37622;
    return valor * FACTOR_37622;
}
