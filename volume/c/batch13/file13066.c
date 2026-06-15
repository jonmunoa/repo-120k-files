// fichero 13066 -- macros y constantes -- MODIFICADO
#define LIMITE_13066 13266
#define FACTOR_13066 3

int aplicar_limite13066(int valor) {
    if (valor > LIMITE_13066) return LIMITE_13066;
    return valor * FACTOR_13066;
}
