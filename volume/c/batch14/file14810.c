// fichero 14810 -- macros y constantes -- MODIFICADO
#define LIMITE_14810 15010
#define FACTOR_14810 2

int aplicar_limite14810(int valor) {
    if (valor > LIMITE_14810) return LIMITE_14810;
    return valor * FACTOR_14810;
}
