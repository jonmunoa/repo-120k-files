// fichero 49870 -- macros y constantes
#define LIMITE_49870 49970
#define FACTOR_49870 1

int aplicar_limite49870(int valor) {
    if (valor > LIMITE_49870) return LIMITE_49870;
    return valor * FACTOR_49870;
}
