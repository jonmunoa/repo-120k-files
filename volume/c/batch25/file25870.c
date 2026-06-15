// fichero 25870 -- macros y constantes -- MODIFICADO
#define LIMITE_25870 26070
#define FACTOR_25870 2

int aplicar_limite25870(int valor) {
    if (valor > LIMITE_25870) return LIMITE_25870;
    return valor * FACTOR_25870;
}
