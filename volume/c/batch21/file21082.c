// fichero 21082 -- macros y constantes -- MODIFICADO
#define LIMITE_21082 21282
#define FACTOR_21082 4

int aplicar_limite21082(int valor) {
    if (valor > LIMITE_21082) return LIMITE_21082;
    return valor * FACTOR_21082;
}
