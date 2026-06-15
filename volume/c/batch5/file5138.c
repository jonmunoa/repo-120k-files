// fichero 5138 -- macros y constantes -- MODIFICADO
#define LIMITE_5138 5338
#define FACTOR_5138 5

int aplicar_limite5138(int valor) {
    if (valor > LIMITE_5138) return LIMITE_5138;
    return valor * FACTOR_5138;
}
