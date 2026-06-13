// fichero 11570 -- macros y constantes
#define LIMITE_11570 11670
#define FACTOR_11570 1

int aplicar_limite11570(int valor) {
    if (valor > LIMITE_11570) return LIMITE_11570;
    return valor * FACTOR_11570;
}
