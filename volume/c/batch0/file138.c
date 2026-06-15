// fichero 138 -- macros y constantes -- MODIFICADO
#define LIMITE_138 338
#define FACTOR_138 5

int aplicar_limite138(int valor) {
    if (valor > LIMITE_138) return LIMITE_138;
    return valor * FACTOR_138;
}
