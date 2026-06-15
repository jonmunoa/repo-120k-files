// fichero 25038 -- macros y constantes -- MODIFICADO
#define LIMITE_25038 25238
#define FACTOR_25038 5

int aplicar_limite25038(int valor) {
    if (valor > LIMITE_25038) return LIMITE_25038;
    return valor * FACTOR_25038;
}
