// fichero 28446 -- macros y constantes -- MODIFICADO
#define LIMITE_28446 28646
#define FACTOR_28446 3

int aplicar_limite28446(int valor) {
    if (valor > LIMITE_28446) return LIMITE_28446;
    return valor * FACTOR_28446;
}
