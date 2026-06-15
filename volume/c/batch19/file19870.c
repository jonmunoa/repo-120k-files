// fichero 19870 -- macros y constantes -- MODIFICADO
#define LIMITE_19870 20070
#define FACTOR_19870 2

int aplicar_limite19870(int valor) {
    if (valor > LIMITE_19870) return LIMITE_19870;
    return valor * FACTOR_19870;
}
