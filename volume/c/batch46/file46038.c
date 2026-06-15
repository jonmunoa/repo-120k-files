// fichero 46038 -- macros y constantes -- MODIFICADO
#define LIMITE_46038 46238
#define FACTOR_46038 5

int aplicar_limite46038(int valor) {
    if (valor > LIMITE_46038) return LIMITE_46038;
    return valor * FACTOR_46038;
}
