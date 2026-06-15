// fichero 3382 -- macros y constantes -- MODIFICADO
#define LIMITE_3382 3582
#define FACTOR_3382 4

int aplicar_limite3382(int valor) {
    if (valor > LIMITE_3382) return LIMITE_3382;
    return valor * FACTOR_3382;
}
