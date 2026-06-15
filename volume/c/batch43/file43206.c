// fichero 43206 -- macros y constantes -- MODIFICADO
#define LIMITE_43206 43406
#define FACTOR_43206 3

int aplicar_limite43206(int valor) {
    if (valor > LIMITE_43206) return LIMITE_43206;
    return valor * FACTOR_43206;
}
