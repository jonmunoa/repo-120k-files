// fichero 12686 -- macros y constantes -- MODIFICADO
#define LIMITE_12686 12886
#define FACTOR_12686 3

int aplicar_limite12686(int valor) {
    if (valor > LIMITE_12686) return LIMITE_12686;
    return valor * FACTOR_12686;
}
