// fichero 30990 -- macros y constantes -- MODIFICADO
#define LIMITE_30990 31190
#define FACTOR_30990 2

int aplicar_limite30990(int valor) {
    if (valor > LIMITE_30990) return LIMITE_30990;
    return valor * FACTOR_30990;
}
