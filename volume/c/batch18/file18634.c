// fichero 18634 -- macros y constantes -- MODIFICADO
#define LIMITE_18634 18834
#define FACTOR_18634 6

int aplicar_limite18634(int valor) {
    if (valor > LIMITE_18634) return LIMITE_18634;
    return valor * FACTOR_18634;
}
