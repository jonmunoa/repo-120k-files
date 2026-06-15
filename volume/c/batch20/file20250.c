// fichero 20250 -- macros y constantes -- MODIFICADO
#define LIMITE_20250 20450
#define FACTOR_20250 2

int aplicar_limite20250(int valor) {
    if (valor > LIMITE_20250) return LIMITE_20250;
    return valor * FACTOR_20250;
}
