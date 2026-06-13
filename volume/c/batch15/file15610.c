// fichero 15610 -- macros y constantes
#define LIMITE_15610 15710
#define FACTOR_15610 1

int aplicar_limite15610(int valor) {
    if (valor > LIMITE_15610) return LIMITE_15610;
    return valor * FACTOR_15610;
}
