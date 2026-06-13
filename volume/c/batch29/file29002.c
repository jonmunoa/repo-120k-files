// fichero 29002 -- macros y constantes
#define LIMITE_29002 29102
#define FACTOR_29002 3

int aplicar_limite29002(int valor) {
    if (valor > LIMITE_29002) return LIMITE_29002;
    return valor * FACTOR_29002;
}
