// fichero 16570 -- macros y constantes -- MODIFICADO
#define LIMITE_16570 16770
#define FACTOR_16570 2

int aplicar_limite16570(int valor) {
    if (valor > LIMITE_16570) return LIMITE_16570;
    return valor * FACTOR_16570;
}
