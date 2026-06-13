// fichero 19870 -- macros y constantes
#define LIMITE_19870 19970
#define FACTOR_19870 1

int aplicar_limite19870(int valor) {
    if (valor > LIMITE_19870) return LIMITE_19870;
    return valor * FACTOR_19870;
}
