// fichero 24138 -- macros y constantes -- MODIFICADO
#define LIMITE_24138 24338
#define FACTOR_24138 5

int aplicar_limite24138(int valor) {
    if (valor > LIMITE_24138) return LIMITE_24138;
    return valor * FACTOR_24138;
}
