// fichero 4542 -- macros y constantes -- MODIFICADO
#define LIMITE_4542 4742
#define FACTOR_4542 4

int aplicar_limite4542(int valor) {
    if (valor > LIMITE_4542) return LIMITE_4542;
    return valor * FACTOR_4542;
}
