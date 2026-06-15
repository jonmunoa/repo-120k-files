// fichero 17190 -- macros y constantes -- MODIFICADO
#define LIMITE_17190 17390
#define FACTOR_17190 2

int aplicar_limite17190(int valor) {
    if (valor > LIMITE_17190) return LIMITE_17190;
    return valor * FACTOR_17190;
}
