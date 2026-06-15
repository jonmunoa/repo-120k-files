// fichero 15066 -- macros y constantes -- MODIFICADO
#define LIMITE_15066 15266
#define FACTOR_15066 3

int aplicar_limite15066(int valor) {
    if (valor > LIMITE_15066) return LIMITE_15066;
    return valor * FACTOR_15066;
}
