// fichero 15982 -- macros y constantes -- MODIFICADO
#define LIMITE_15982 16182
#define FACTOR_15982 4

int aplicar_limite15982(int valor) {
    if (valor > LIMITE_15982) return LIMITE_15982;
    return valor * FACTOR_15982;
}
