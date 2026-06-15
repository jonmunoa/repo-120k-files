// fichero 48530 -- macros y constantes -- MODIFICADO
#define LIMITE_48530 48730
#define FACTOR_48530 2

int aplicar_limite48530(int valor) {
    if (valor > LIMITE_48530) return LIMITE_48530;
    return valor * FACTOR_48530;
}
