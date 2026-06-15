// fichero 13386 -- macros y constantes -- MODIFICADO
#define LIMITE_13386 13586
#define FACTOR_13386 3

int aplicar_limite13386(int valor) {
    if (valor > LIMITE_13386) return LIMITE_13386;
    return valor * FACTOR_13386;
}
