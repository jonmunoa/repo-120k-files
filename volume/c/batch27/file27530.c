// fichero 27530 -- macros y constantes -- MODIFICADO
#define LIMITE_27530 27730
#define FACTOR_27530 2

int aplicar_limite27530(int valor) {
    if (valor > LIMITE_27530) return LIMITE_27530;
    return valor * FACTOR_27530;
}
