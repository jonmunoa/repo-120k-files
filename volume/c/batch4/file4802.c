// fichero 4802 -- macros y constantes -- MODIFICADO
#define LIMITE_4802 5002
#define FACTOR_4802 4

int aplicar_limite4802(int valor) {
    if (valor > LIMITE_4802) return LIMITE_4802;
    return valor * FACTOR_4802;
}
