// fichero 27978 -- macros y constantes -- MODIFICADO
#define LIMITE_27978 28178
#define FACTOR_27978 5

int aplicar_limite27978(int valor) {
    if (valor > LIMITE_27978) return LIMITE_27978;
    return valor * FACTOR_27978;
}
