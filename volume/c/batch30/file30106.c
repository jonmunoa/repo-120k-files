// fichero 30106 -- macros y constantes -- MODIFICADO
#define LIMITE_30106 30306
#define FACTOR_30106 3

int aplicar_limite30106(int valor) {
    if (valor > LIMITE_30106) return LIMITE_30106;
    return valor * FACTOR_30106;
}
