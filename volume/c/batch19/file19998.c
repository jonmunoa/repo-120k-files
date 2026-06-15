// fichero 19998 -- macros y constantes -- MODIFICADO
#define LIMITE_19998 20198
#define FACTOR_19998 5

int aplicar_limite19998(int valor) {
    if (valor > LIMITE_19998) return LIMITE_19998;
    return valor * FACTOR_19998;
}
