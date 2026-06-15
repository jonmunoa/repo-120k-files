// fichero 45758 -- macros y constantes -- MODIFICADO
#define LIMITE_45758 45958
#define FACTOR_45758 5

int aplicar_limite45758(int valor) {
    if (valor > LIMITE_45758) return LIMITE_45758;
    return valor * FACTOR_45758;
}
