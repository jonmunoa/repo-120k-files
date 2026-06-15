// fichero 2066 -- macros y constantes -- MODIFICADO
#define LIMITE_2066 2266
#define FACTOR_2066 3

int aplicar_limite2066(int valor) {
    if (valor > LIMITE_2066) return LIMITE_2066;
    return valor * FACTOR_2066;
}
