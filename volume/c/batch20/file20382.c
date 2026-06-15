// fichero 20382 -- macros y constantes -- MODIFICADO
#define LIMITE_20382 20582
#define FACTOR_20382 4

int aplicar_limite20382(int valor) {
    if (valor > LIMITE_20382) return LIMITE_20382;
    return valor * FACTOR_20382;
}
