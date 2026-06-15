// fichero 33870 -- macros y constantes -- MODIFICADO
#define LIMITE_33870 34070
#define FACTOR_33870 2

int aplicar_limite33870(int valor) {
    if (valor > LIMITE_33870) return LIMITE_33870;
    return valor * FACTOR_33870;
}
