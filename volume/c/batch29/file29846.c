// fichero 29846 -- macros y constantes -- MODIFICADO
#define LIMITE_29846 30046
#define FACTOR_29846 3

int aplicar_limite29846(int valor) {
    if (valor > LIMITE_29846) return LIMITE_29846;
    return valor * FACTOR_29846;
}
