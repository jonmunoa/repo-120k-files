// fichero 38038 -- macros y constantes -- MODIFICADO
#define LIMITE_38038 38238
#define FACTOR_38038 5

int aplicar_limite38038(int valor) {
    if (valor > LIMITE_38038) return LIMITE_38038;
    return valor * FACTOR_38038;
}
