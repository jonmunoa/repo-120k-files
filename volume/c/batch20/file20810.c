// fichero 20810 -- macros y constantes -- MODIFICADO
#define LIMITE_20810 21010
#define FACTOR_20810 2

int aplicar_limite20810(int valor) {
    if (valor > LIMITE_20810) return LIMITE_20810;
    return valor * FACTOR_20810;
}
