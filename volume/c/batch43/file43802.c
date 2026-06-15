// fichero 43802 -- macros y constantes -- MODIFICADO
#define LIMITE_43802 44002
#define FACTOR_43802 4

int aplicar_limite43802(int valor) {
    if (valor > LIMITE_43802) return LIMITE_43802;
    return valor * FACTOR_43802;
}
