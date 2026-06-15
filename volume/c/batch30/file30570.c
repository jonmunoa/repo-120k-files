// fichero 30570 -- macros y constantes -- MODIFICADO
#define LIMITE_30570 30770
#define FACTOR_30570 2

int aplicar_limite30570(int valor) {
    if (valor > LIMITE_30570) return LIMITE_30570;
    return valor * FACTOR_30570;
}
