// fichero 46778 -- macros y constantes -- MODIFICADO
#define LIMITE_46778 46978
#define FACTOR_46778 5

int aplicar_limite46778(int valor) {
    if (valor > LIMITE_46778) return LIMITE_46778;
    return valor * FACTOR_46778;
}
