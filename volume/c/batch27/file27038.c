// fichero 27038 -- macros y constantes -- MODIFICADO
#define LIMITE_27038 27238
#define FACTOR_27038 5

int aplicar_limite27038(int valor) {
    if (valor > LIMITE_27038) return LIMITE_27038;
    return valor * FACTOR_27038;
}
