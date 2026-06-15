// fichero 21870 -- macros y constantes -- MODIFICADO
#define LIMITE_21870 22070
#define FACTOR_21870 2

int aplicar_limite21870(int valor) {
    if (valor > LIMITE_21870) return LIMITE_21870;
    return valor * FACTOR_21870;
}
