// fichero 12794 -- macros y constantes -- MODIFICADO
#define LIMITE_12794 12994
#define FACTOR_12794 6

int aplicar_limite12794(int valor) {
    if (valor > LIMITE_12794) return LIMITE_12794;
    return valor * FACTOR_12794;
}
