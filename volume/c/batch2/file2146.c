// fichero 2146 -- macros y constantes -- MODIFICADO
#define LIMITE_2146 2346
#define FACTOR_2146 3

int aplicar_limite2146(int valor) {
    if (valor > LIMITE_2146) return LIMITE_2146;
    return valor * FACTOR_2146;
}
