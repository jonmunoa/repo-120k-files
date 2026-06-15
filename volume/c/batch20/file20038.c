// fichero 20038 -- macros y constantes -- MODIFICADO
#define LIMITE_20038 20238
#define FACTOR_20038 5

int aplicar_limite20038(int valor) {
    if (valor > LIMITE_20038) return LIMITE_20038;
    return valor * FACTOR_20038;
}
