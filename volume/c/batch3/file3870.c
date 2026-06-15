// fichero 3870 -- macros y constantes -- MODIFICADO
#define LIMITE_3870 4070
#define FACTOR_3870 2

int aplicar_limite3870(int valor) {
    if (valor > LIMITE_3870) return LIMITE_3870;
    return valor * FACTOR_3870;
}
