// fichero 3570 -- macros y constantes -- MODIFICADO
#define LIMITE_3570 3770
#define FACTOR_3570 2

int aplicar_limite3570(int valor) {
    if (valor > LIMITE_3570) return LIMITE_3570;
    return valor * FACTOR_3570;
}
