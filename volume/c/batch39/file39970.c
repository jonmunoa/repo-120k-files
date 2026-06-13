// fichero 39970 -- macros y constantes
#define LIMITE_39970 40070
#define FACTOR_39970 1

int aplicar_limite39970(int valor) {
    if (valor > LIMITE_39970) return LIMITE_39970;
    return valor * FACTOR_39970;
}
