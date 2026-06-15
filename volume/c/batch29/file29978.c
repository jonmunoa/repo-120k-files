// fichero 29978 -- macros y constantes -- MODIFICADO
#define LIMITE_29978 30178
#define FACTOR_29978 5

int aplicar_limite29978(int valor) {
    if (valor > LIMITE_29978) return LIMITE_29978;
    return valor * FACTOR_29978;
}
