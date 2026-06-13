// fichero 37970 -- macros y constantes
#define LIMITE_37970 38070
#define FACTOR_37970 1

int aplicar_limite37970(int valor) {
    if (valor > LIMITE_37970) return LIMITE_37970;
    return valor * FACTOR_37970;
}
