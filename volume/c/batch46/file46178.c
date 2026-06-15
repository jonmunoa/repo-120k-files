// fichero 46178 -- macros y constantes -- MODIFICADO
#define LIMITE_46178 46378
#define FACTOR_46178 5

int aplicar_limite46178(int valor) {
    if (valor > LIMITE_46178) return LIMITE_46178;
    return valor * FACTOR_46178;
}
