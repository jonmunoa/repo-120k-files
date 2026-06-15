// fichero 6870 -- macros y constantes -- MODIFICADO
#define LIMITE_6870 7070
#define FACTOR_6870 2

int aplicar_limite6870(int valor) {
    if (valor > LIMITE_6870) return LIMITE_6870;
    return valor * FACTOR_6870;
}
