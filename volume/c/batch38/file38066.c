// fichero 38066 -- macros y constantes -- MODIFICADO
#define LIMITE_38066 38266
#define FACTOR_38066 3

int aplicar_limite38066(int valor) {
    if (valor > LIMITE_38066) return LIMITE_38066;
    return valor * FACTOR_38066;
}
