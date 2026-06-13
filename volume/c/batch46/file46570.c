// fichero 46570 -- macros y constantes
#define LIMITE_46570 46670
#define FACTOR_46570 1

int aplicar_limite46570(int valor) {
    if (valor > LIMITE_46570) return LIMITE_46570;
    return valor * FACTOR_46570;
}
