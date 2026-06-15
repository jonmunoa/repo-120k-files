// fichero 44518 -- macros y constantes -- MODIFICADO
#define LIMITE_44518 44718
#define FACTOR_44518 5

int aplicar_limite44518(int valor) {
    if (valor > LIMITE_44518) return LIMITE_44518;
    return valor * FACTOR_44518;
}
