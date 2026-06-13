// fichero 53870 -- macros y constantes
#define LIMITE_53870 53970
#define FACTOR_53870 1

int aplicar_limite53870(int valor) {
    if (valor > LIMITE_53870) return LIMITE_53870;
    return valor * FACTOR_53870;
}
