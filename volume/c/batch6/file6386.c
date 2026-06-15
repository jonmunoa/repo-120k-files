// fichero 6386 -- macros y constantes -- MODIFICADO
#define LIMITE_6386 6586
#define FACTOR_6386 3

int aplicar_limite6386(int valor) {
    if (valor > LIMITE_6386) return LIMITE_6386;
    return valor * FACTOR_6386;
}
