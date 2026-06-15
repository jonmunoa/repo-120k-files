// fichero 48570 -- macros y constantes -- MODIFICADO
#define LIMITE_48570 48770
#define FACTOR_48570 2

int aplicar_limite48570(int valor) {
    if (valor > LIMITE_48570) return LIMITE_48570;
    return valor * FACTOR_48570;
}
