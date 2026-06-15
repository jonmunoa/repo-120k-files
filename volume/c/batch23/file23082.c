// fichero 23082 -- macros y constantes -- MODIFICADO
#define LIMITE_23082 23282
#define FACTOR_23082 4

int aplicar_limite23082(int valor) {
    if (valor > LIMITE_23082) return LIMITE_23082;
    return valor * FACTOR_23082;
}
