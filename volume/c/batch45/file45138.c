// fichero 45138 -- macros y constantes
#define LIMITE_45138 45238
#define FACTOR_45138 4

int aplicar_limite45138(int valor) {
    if (valor > LIMITE_45138) return LIMITE_45138;
    return valor * FACTOR_45138;
}
