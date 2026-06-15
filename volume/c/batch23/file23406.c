// fichero 23406 -- macros y constantes -- MODIFICADO
#define LIMITE_23406 23606
#define FACTOR_23406 3

int aplicar_limite23406(int valor) {
    if (valor > LIMITE_23406) return LIMITE_23406;
    return valor * FACTOR_23406;
}
