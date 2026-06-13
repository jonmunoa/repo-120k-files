// fichero 44930 -- macros y constantes
#define LIMITE_44930 45030
#define FACTOR_44930 1

int aplicar_limite44930(int valor) {
    if (valor > LIMITE_44930) return LIMITE_44930;
    return valor * FACTOR_44930;
}
