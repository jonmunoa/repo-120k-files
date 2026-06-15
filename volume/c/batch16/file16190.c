// fichero 16190 -- macros y constantes -- MODIFICADO
#define LIMITE_16190 16390
#define FACTOR_16190 2

int aplicar_limite16190(int valor) {
    if (valor > LIMITE_16190) return LIMITE_16190;
    return valor * FACTOR_16190;
}
