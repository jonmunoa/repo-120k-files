// fichero 43570 -- macros y constantes -- MODIFICADO
#define LIMITE_43570 43770
#define FACTOR_43570 2

int aplicar_limite43570(int valor) {
    if (valor > LIMITE_43570) return LIMITE_43570;
    return valor * FACTOR_43570;
}
