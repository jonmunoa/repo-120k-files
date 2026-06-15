// fichero 28038 -- macros y constantes -- MODIFICADO
#define LIMITE_28038 28238
#define FACTOR_28038 5

int aplicar_limite28038(int valor) {
    if (valor > LIMITE_28038) return LIMITE_28038;
    return valor * FACTOR_28038;
}
