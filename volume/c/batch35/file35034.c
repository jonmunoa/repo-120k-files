// fichero 35034 -- macros y constantes -- MODIFICADO
#define LIMITE_35034 35234
#define FACTOR_35034 6

int aplicar_limite35034(int valor) {
    if (valor > LIMITE_35034) return LIMITE_35034;
    return valor * FACTOR_35034;
}
