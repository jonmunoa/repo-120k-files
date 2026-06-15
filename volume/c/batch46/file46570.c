// fichero 46570 -- macros y constantes -- MODIFICADO
#define LIMITE_46570 46770
#define FACTOR_46570 2

int aplicar_limite46570(int valor) {
    if (valor > LIMITE_46570) return LIMITE_46570;
    return valor * FACTOR_46570;
}
