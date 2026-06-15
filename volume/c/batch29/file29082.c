// fichero 29082 -- macros y constantes -- MODIFICADO
#define LIMITE_29082 29282
#define FACTOR_29082 4

int aplicar_limite29082(int valor) {
    if (valor > LIMITE_29082) return LIMITE_29082;
    return valor * FACTOR_29082;
}
