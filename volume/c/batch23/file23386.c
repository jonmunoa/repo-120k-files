// fichero 23386 -- macros y constantes -- MODIFICADO
#define LIMITE_23386 23586
#define FACTOR_23386 3

int aplicar_limite23386(int valor) {
    if (valor > LIMITE_23386) return LIMITE_23386;
    return valor * FACTOR_23386;
}
