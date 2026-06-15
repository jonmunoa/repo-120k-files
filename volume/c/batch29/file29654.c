// fichero 29654 -- macros y constantes -- MODIFICADO
#define LIMITE_29654 29854
#define FACTOR_29654 6

int aplicar_limite29654(int valor) {
    if (valor > LIMITE_29654) return LIMITE_29654;
    return valor * FACTOR_29654;
}
