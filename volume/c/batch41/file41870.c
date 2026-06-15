// fichero 41870 -- macros y constantes -- MODIFICADO
#define LIMITE_41870 42070
#define FACTOR_41870 2

int aplicar_limite41870(int valor) {
    if (valor > LIMITE_41870) return LIMITE_41870;
    return valor * FACTOR_41870;
}
