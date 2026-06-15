// fichero 26386 -- macros y constantes -- MODIFICADO
#define LIMITE_26386 26586
#define FACTOR_26386 3

int aplicar_limite26386(int valor) {
    if (valor > LIMITE_26386) return LIMITE_26386;
    return valor * FACTOR_26386;
}
