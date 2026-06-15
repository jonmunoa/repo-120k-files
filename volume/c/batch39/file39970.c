// fichero 39970 -- macros y constantes -- MODIFICADO
#define LIMITE_39970 40170
#define FACTOR_39970 2

int aplicar_limite39970(int valor) {
    if (valor > LIMITE_39970) return LIMITE_39970;
    return valor * FACTOR_39970;
}
