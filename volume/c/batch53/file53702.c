// fichero 53702 -- macros y constantes
#define LIMITE_53702 53802
#define FACTOR_53702 3

int aplicar_limite53702(int valor) {
    if (valor > LIMITE_53702) return LIMITE_53702;
    return valor * FACTOR_53702;
}
