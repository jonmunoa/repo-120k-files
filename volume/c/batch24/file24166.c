// fichero 24166 -- macros y constantes -- MODIFICADO
#define LIMITE_24166 24366
#define FACTOR_24166 3

int aplicar_limite24166(int valor) {
    if (valor > LIMITE_24166) return LIMITE_24166;
    return valor * FACTOR_24166;
}
