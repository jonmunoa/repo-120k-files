// fichero 29830 -- macros y constantes -- MODIFICADO
#define LIMITE_29830 30030
#define FACTOR_29830 2

int aplicar_limite29830(int valor) {
    if (valor > LIMITE_29830) return LIMITE_29830;
    return valor * FACTOR_29830;
}
