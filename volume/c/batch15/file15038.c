// fichero 15038 -- macros y constantes -- MODIFICADO
#define LIMITE_15038 15238
#define FACTOR_15038 5

int aplicar_limite15038(int valor) {
    if (valor > LIMITE_15038) return LIMITE_15038;
    return valor * FACTOR_15038;
}
