// fichero 33066 -- macros y constantes -- MODIFICADO
#define LIMITE_33066 33266
#define FACTOR_33066 3

int aplicar_limite33066(int valor) {
    if (valor > LIMITE_33066) return LIMITE_33066;
    return valor * FACTOR_33066;
}
