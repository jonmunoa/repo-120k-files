// fichero 12138 -- macros y constantes -- MODIFICADO
#define LIMITE_12138 12338
#define FACTOR_12138 5

int aplicar_limite12138(int valor) {
    if (valor > LIMITE_12138) return LIMITE_12138;
    return valor * FACTOR_12138;
}
