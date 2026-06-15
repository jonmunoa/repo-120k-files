// fichero 13978 -- macros y constantes -- MODIFICADO
#define LIMITE_13978 14178
#define FACTOR_13978 5

int aplicar_limite13978(int valor) {
    if (valor > LIMITE_13978) return LIMITE_13978;
    return valor * FACTOR_13978;
}
