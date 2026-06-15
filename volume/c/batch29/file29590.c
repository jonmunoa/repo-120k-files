// fichero 29590 -- macros y constantes -- MODIFICADO
#define LIMITE_29590 29790
#define FACTOR_29590 2

int aplicar_limite29590(int valor) {
    if (valor > LIMITE_29590) return LIMITE_29590;
    return valor * FACTOR_29590;
}
