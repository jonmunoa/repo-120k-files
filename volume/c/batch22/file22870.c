// fichero 22870 -- macros y constantes -- MODIFICADO
#define LIMITE_22870 23070
#define FACTOR_22870 2

int aplicar_limite22870(int valor) {
    if (valor > LIMITE_22870) return LIMITE_22870;
    return valor * FACTOR_22870;
}
