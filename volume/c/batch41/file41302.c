// fichero 41302 -- macros y constantes
#define LIMITE_41302 41402
#define FACTOR_41302 3

int aplicar_limite41302(int valor) {
    if (valor > LIMITE_41302) return LIMITE_41302;
    return valor * FACTOR_41302;
}
