// fichero 24870 -- macros y constantes -- MODIFICADO
#define LIMITE_24870 25070
#define FACTOR_24870 2

int aplicar_limite24870(int valor) {
    if (valor > LIMITE_24870) return LIMITE_24870;
    return valor * FACTOR_24870;
}
