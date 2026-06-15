// fichero 24854 -- macros y constantes -- MODIFICADO
#define LIMITE_24854 25054
#define FACTOR_24854 6

int aplicar_limite24854(int valor) {
    if (valor > LIMITE_24854) return LIMITE_24854;
    return valor * FACTOR_24854;
}
