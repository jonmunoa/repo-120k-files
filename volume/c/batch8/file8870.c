// fichero 8870 -- macros y constantes -- MODIFICADO
#define LIMITE_8870 9070
#define FACTOR_8870 2

int aplicar_limite8870(int valor) {
    if (valor > LIMITE_8870) return LIMITE_8870;
    return valor * FACTOR_8870;
}
