// fichero 48038 -- macros y constantes -- MODIFICADO
#define LIMITE_48038 48238
#define FACTOR_48038 5

int aplicar_limite48038(int valor) {
    if (valor > LIMITE_48038) return LIMITE_48038;
    return valor * FACTOR_48038;
}
