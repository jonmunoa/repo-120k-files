// fichero 47918 -- macros y constantes -- MODIFICADO
#define LIMITE_47918 48118
#define FACTOR_47918 5

int aplicar_limite47918(int valor) {
    if (valor > LIMITE_47918) return LIMITE_47918;
    return valor * FACTOR_47918;
}
