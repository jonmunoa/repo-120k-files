// fichero 38570 -- macros y constantes -- MODIFICADO
#define LIMITE_38570 38770
#define FACTOR_38570 2

int aplicar_limite38570(int valor) {
    if (valor > LIMITE_38570) return LIMITE_38570;
    return valor * FACTOR_38570;
}
