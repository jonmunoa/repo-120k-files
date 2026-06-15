// fichero 43150 -- macros y constantes -- MODIFICADO
#define LIMITE_43150 43350
#define FACTOR_43150 2

int aplicar_limite43150(int valor) {
    if (valor > LIMITE_43150) return LIMITE_43150;
    return valor * FACTOR_43150;
}
