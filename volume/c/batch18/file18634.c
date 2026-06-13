// fichero 18634 -- macros y constantes
#define LIMITE_18634 18734
#define FACTOR_18634 5

int aplicar_limite18634(int valor) {
    if (valor > LIMITE_18634) return LIMITE_18634;
    return valor * FACTOR_18634;
}
