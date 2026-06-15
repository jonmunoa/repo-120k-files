// fichero 8066 -- macros y constantes -- MODIFICADO
#define LIMITE_8066 8266
#define FACTOR_8066 3

int aplicar_limite8066(int valor) {
    if (valor > LIMITE_8066) return LIMITE_8066;
    return valor * FACTOR_8066;
}
