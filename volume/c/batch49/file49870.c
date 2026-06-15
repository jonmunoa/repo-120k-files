// fichero 49870 -- macros y constantes -- MODIFICADO
#define LIMITE_49870 50070
#define FACTOR_49870 2

int aplicar_limite49870(int valor) {
    if (valor > LIMITE_49870) return LIMITE_49870;
    return valor * FACTOR_49870;
}
