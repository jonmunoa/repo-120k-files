// fichero 43038 -- macros y constantes -- MODIFICADO
#define LIMITE_43038 43238
#define FACTOR_43038 5

int aplicar_limite43038(int valor) {
    if (valor > LIMITE_43038) return LIMITE_43038;
    return valor * FACTOR_43038;
}
