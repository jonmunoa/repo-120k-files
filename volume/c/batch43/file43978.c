// fichero 43978 -- macros y constantes -- MODIFICADO
#define LIMITE_43978 44178
#define FACTOR_43978 5

int aplicar_limite43978(int valor) {
    if (valor > LIMITE_43978) return LIMITE_43978;
    return valor * FACTOR_43978;
}
