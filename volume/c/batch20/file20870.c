// fichero 20870 -- macros y constantes -- MODIFICADO
#define LIMITE_20870 21070
#define FACTOR_20870 2

int aplicar_limite20870(int valor) {
    if (valor > LIMITE_20870) return LIMITE_20870;
    return valor * FACTOR_20870;
}
