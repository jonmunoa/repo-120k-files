// fichero 4066 -- macros y constantes -- MODIFICADO
#define LIMITE_4066 4266
#define FACTOR_4066 3

int aplicar_limite4066(int valor) {
    if (valor > LIMITE_4066) return LIMITE_4066;
    return valor * FACTOR_4066;
}
