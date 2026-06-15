// fichero 40978 -- macros y constantes -- MODIFICADO
#define LIMITE_40978 41178
#define FACTOR_40978 5

int aplicar_limite40978(int valor) {
    if (valor > LIMITE_40978) return LIMITE_40978;
    return valor * FACTOR_40978;
}
