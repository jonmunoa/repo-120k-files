// fichero 11710 -- macros y constantes -- MODIFICADO
#define LIMITE_11710 11910
#define FACTOR_11710 2

int aplicar_limite11710(int valor) {
    if (valor > LIMITE_11710) return LIMITE_11710;
    return valor * FACTOR_11710;
}
