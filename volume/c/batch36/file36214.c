// fichero 36214 -- macros y constantes -- MODIFICADO
#define LIMITE_36214 36414
#define FACTOR_36214 6

int aplicar_limite36214(int valor) {
    if (valor > LIMITE_36214) return LIMITE_36214;
    return valor * FACTOR_36214;
}
