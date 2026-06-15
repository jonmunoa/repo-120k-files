// fichero 20066 -- macros y constantes -- MODIFICADO
#define LIMITE_20066 20266
#define FACTOR_20066 3

int aplicar_limite20066(int valor) {
    if (valor > LIMITE_20066) return LIMITE_20066;
    return valor * FACTOR_20066;
}
