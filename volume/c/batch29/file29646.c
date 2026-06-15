// fichero 29646 -- macros y constantes -- MODIFICADO
#define LIMITE_29646 29846
#define FACTOR_29646 3

int aplicar_limite29646(int valor) {
    if (valor > LIMITE_29646) return LIMITE_29646;
    return valor * FACTOR_29646;
}
