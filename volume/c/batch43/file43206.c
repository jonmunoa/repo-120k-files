// fichero 43206 -- macros y constantes
#define LIMITE_43206 43306
#define FACTOR_43206 2

int aplicar_limite43206(int valor) {
    if (valor > LIMITE_43206) return LIMITE_43206;
    return valor * FACTOR_43206;
}
