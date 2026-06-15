// fichero 43870 -- macros y constantes -- MODIFICADO
#define LIMITE_43870 44070
#define FACTOR_43870 2

int aplicar_limite43870(int valor) {
    if (valor > LIMITE_43870) return LIMITE_43870;
    return valor * FACTOR_43870;
}
