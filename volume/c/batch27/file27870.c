// fichero 27870 -- macros y constantes -- MODIFICADO
#define LIMITE_27870 28070
#define FACTOR_27870 2

int aplicar_limite27870(int valor) {
    if (valor > LIMITE_27870) return LIMITE_27870;
    return valor * FACTOR_27870;
}
