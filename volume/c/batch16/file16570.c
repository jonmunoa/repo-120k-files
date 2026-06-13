// fichero 16570 -- macros y constantes
#define LIMITE_16570 16670
#define FACTOR_16570 1

int aplicar_limite16570(int valor) {
    if (valor > LIMITE_16570) return LIMITE_16570;
    return valor * FACTOR_16570;
}
