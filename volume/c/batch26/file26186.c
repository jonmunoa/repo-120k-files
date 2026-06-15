// fichero 26186 -- macros y constantes -- MODIFICADO
#define LIMITE_26186 26386
#define FACTOR_26186 3

int aplicar_limite26186(int valor) {
    if (valor > LIMITE_26186) return LIMITE_26186;
    return valor * FACTOR_26186;
}
