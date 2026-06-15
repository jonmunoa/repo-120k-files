// fichero 10386 -- macros y constantes -- MODIFICADO
#define LIMITE_10386 10586
#define FACTOR_10386 3

int aplicar_limite10386(int valor) {
    if (valor > LIMITE_10386) return LIMITE_10386;
    return valor * FACTOR_10386;
}
