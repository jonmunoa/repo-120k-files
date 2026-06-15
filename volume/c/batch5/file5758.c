// fichero 5758 -- macros y constantes -- MODIFICADO
#define LIMITE_5758 5958
#define FACTOR_5758 5

int aplicar_limite5758(int valor) {
    if (valor > LIMITE_5758) return LIMITE_5758;
    return valor * FACTOR_5758;
}
