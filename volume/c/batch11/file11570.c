// fichero 11570 -- macros y constantes -- MODIFICADO
#define LIMITE_11570 11770
#define FACTOR_11570 2

int aplicar_limite11570(int valor) {
    if (valor > LIMITE_11570) return LIMITE_11570;
    return valor * FACTOR_11570;
}
