// fichero 22382 -- macros y constantes -- MODIFICADO
#define LIMITE_22382 22582
#define FACTOR_22382 4

int aplicar_limite22382(int valor) {
    if (valor > LIMITE_22382) return LIMITE_22382;
    return valor * FACTOR_22382;
}
