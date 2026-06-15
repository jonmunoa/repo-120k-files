// fichero 39038 -- macros y constantes -- MODIFICADO
#define LIMITE_39038 39238
#define FACTOR_39038 5

int aplicar_limite39038(int valor) {
    if (valor > LIMITE_39038) return LIMITE_39038;
    return valor * FACTOR_39038;
}
