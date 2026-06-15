// fichero 44742 -- macros y constantes -- MODIFICADO
#define LIMITE_44742 44942
#define FACTOR_44742 4

int aplicar_limite44742(int valor) {
    if (valor > LIMITE_44742) return LIMITE_44742;
    return valor * FACTOR_44742;
}
