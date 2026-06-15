// fichero 46426 -- macros y constantes -- MODIFICADO
#define LIMITE_46426 46626
#define FACTOR_46426 3

int aplicar_limite46426(int valor) {
    if (valor > LIMITE_46426) return LIMITE_46426;
    return valor * FACTOR_46426;
}
