// fichero 38406 -- macros y constantes -- MODIFICADO
#define LIMITE_38406 38606
#define FACTOR_38406 3

int aplicar_limite38406(int valor) {
    if (valor > LIMITE_38406) return LIMITE_38406;
    return valor * FACTOR_38406;
}
