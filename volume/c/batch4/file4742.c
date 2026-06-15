// fichero 4742 -- macros y constantes -- MODIFICADO
#define LIMITE_4742 4942
#define FACTOR_4742 4

int aplicar_limite4742(int valor) {
    if (valor > LIMITE_4742) return LIMITE_4742;
    return valor * FACTOR_4742;
}
