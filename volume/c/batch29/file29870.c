// fichero 29870 -- macros y constantes -- MODIFICADO
#define LIMITE_29870 30070
#define FACTOR_29870 2

int aplicar_limite29870(int valor) {
    if (valor > LIMITE_29870) return LIMITE_29870;
    return valor * FACTOR_29870;
}
