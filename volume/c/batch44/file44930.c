// fichero 44930 -- macros y constantes -- MODIFICADO
#define LIMITE_44930 45130
#define FACTOR_44930 2

int aplicar_limite44930(int valor) {
    if (valor > LIMITE_44930) return LIMITE_44930;
    return valor * FACTOR_44930;
}
