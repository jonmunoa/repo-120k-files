// fichero 37570 -- macros y constantes -- MODIFICADO
#define LIMITE_37570 37770
#define FACTOR_37570 2

int aplicar_limite37570(int valor) {
    if (valor > LIMITE_37570) return LIMITE_37570;
    return valor * FACTOR_37570;
}
