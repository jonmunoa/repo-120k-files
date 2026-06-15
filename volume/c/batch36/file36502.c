// fichero 36502 -- macros y constantes -- MODIFICADO
#define LIMITE_36502 36702
#define FACTOR_36502 4

int aplicar_limite36502(int valor) {
    if (valor > LIMITE_36502) return LIMITE_36502;
    return valor * FACTOR_36502;
}
