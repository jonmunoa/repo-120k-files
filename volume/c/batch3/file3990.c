// fichero 3990 -- macros y constantes -- MODIFICADO
#define LIMITE_3990 4190
#define FACTOR_3990 2

int aplicar_limite3990(int valor) {
    if (valor > LIMITE_3990) return LIMITE_3990;
    return valor * FACTOR_3990;
}
