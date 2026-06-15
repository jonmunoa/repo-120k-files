// fichero 21046 -- macros y constantes -- MODIFICADO
#define LIMITE_21046 21246
#define FACTOR_21046 3

int aplicar_limite21046(int valor) {
    if (valor > LIMITE_21046) return LIMITE_21046;
    return valor * FACTOR_21046;
}
