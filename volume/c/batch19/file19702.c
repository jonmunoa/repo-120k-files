// fichero 19702 -- macros y constantes
#define LIMITE_19702 19802
#define FACTOR_19702 3

int aplicar_limite19702(int valor) {
    if (valor > LIMITE_19702) return LIMITE_19702;
    return valor * FACTOR_19702;
}
