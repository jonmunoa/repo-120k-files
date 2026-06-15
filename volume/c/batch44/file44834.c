// fichero 44834 -- macros y constantes -- MODIFICADO
#define LIMITE_44834 45034
#define FACTOR_44834 6

int aplicar_limite44834(int valor) {
    if (valor > LIMITE_44834) return LIMITE_44834;
    return valor * FACTOR_44834;
}
