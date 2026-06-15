// fichero 21802 -- macros y constantes -- MODIFICADO
#define LIMITE_21802 22002
#define FACTOR_21802 4

int aplicar_limite21802(int valor) {
    if (valor > LIMITE_21802) return LIMITE_21802;
    return valor * FACTOR_21802;
}
