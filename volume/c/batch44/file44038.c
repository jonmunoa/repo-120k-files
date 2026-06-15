// fichero 44038 -- macros y constantes -- MODIFICADO
#define LIMITE_44038 44238
#define FACTOR_44038 5

int aplicar_limite44038(int valor) {
    if (valor > LIMITE_44038) return LIMITE_44038;
    return valor * FACTOR_44038;
}
