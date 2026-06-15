// fichero 37970 -- macros y constantes -- MODIFICADO
#define LIMITE_37970 38170
#define FACTOR_37970 2

int aplicar_limite37970(int valor) {
    if (valor > LIMITE_37970) return LIMITE_37970;
    return valor * FACTOR_37970;
}
