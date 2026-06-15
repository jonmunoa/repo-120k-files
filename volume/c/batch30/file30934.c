// fichero 30934 -- macros y constantes -- MODIFICADO
#define LIMITE_30934 31134
#define FACTOR_30934 6

int aplicar_limite30934(int valor) {
    if (valor > LIMITE_30934) return LIMITE_30934;
    return valor * FACTOR_30934;
}
