// fichero 29102 -- macros y constantes -- MODIFICADO
#define LIMITE_29102 29302
#define FACTOR_29102 4

int aplicar_limite29102(int valor) {
    if (valor > LIMITE_29102) return LIMITE_29102;
    return valor * FACTOR_29102;
}
