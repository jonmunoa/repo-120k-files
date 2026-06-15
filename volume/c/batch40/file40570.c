// fichero 40570 -- macros y constantes -- MODIFICADO
#define LIMITE_40570 40770
#define FACTOR_40570 2

int aplicar_limite40570(int valor) {
    if (valor > LIMITE_40570) return LIMITE_40570;
    return valor * FACTOR_40570;
}
