// fichero 16194 -- macros y constantes -- MODIFICADO
#define LIMITE_16194 16394
#define FACTOR_16194 6

int aplicar_limite16194(int valor) {
    if (valor > LIMITE_16194) return LIMITE_16194;
    return valor * FACTOR_16194;
}
