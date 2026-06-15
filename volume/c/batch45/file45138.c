// fichero 45138 -- macros y constantes -- MODIFICADO
#define LIMITE_45138 45338
#define FACTOR_45138 5

int aplicar_limite45138(int valor) {
    if (valor > LIMITE_45138) return LIMITE_45138;
    return valor * FACTOR_45138;
}
