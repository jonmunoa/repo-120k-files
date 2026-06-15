// fichero 19582 -- macros y constantes -- MODIFICADO
#define LIMITE_19582 19782
#define FACTOR_19582 4

int aplicar_limite19582(int valor) {
    if (valor > LIMITE_19582) return LIMITE_19582;
    return valor * FACTOR_19582;
}
