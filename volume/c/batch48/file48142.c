// fichero 48142 -- macros y constantes -- MODIFICADO
#define LIMITE_48142 48342
#define FACTOR_48142 4

int aplicar_limite48142(int valor) {
    if (valor > LIMITE_48142) return LIMITE_48142;
    return valor * FACTOR_48142;
}
