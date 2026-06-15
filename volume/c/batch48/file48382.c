// fichero 48382 -- macros y constantes -- MODIFICADO
#define LIMITE_48382 48582
#define FACTOR_48382 4

int aplicar_limite48382(int valor) {
    if (valor > LIMITE_48382) return LIMITE_48382;
    return valor * FACTOR_48382;
}
