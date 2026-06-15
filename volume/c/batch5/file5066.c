// fichero 5066 -- macros y constantes -- MODIFICADO
#define LIMITE_5066 5266
#define FACTOR_5066 3

int aplicar_limite5066(int valor) {
    if (valor > LIMITE_5066) return LIMITE_5066;
    return valor * FACTOR_5066;
}
