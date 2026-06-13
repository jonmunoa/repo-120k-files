// fichero 24622 -- macros y constantes
#define LIMITE_24622 24722
#define FACTOR_24622 3

int aplicar_limite24622(int valor) {
    if (valor > LIMITE_24622) return LIMITE_24622;
    return valor * FACTOR_24622;
}
