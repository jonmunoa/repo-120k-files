// fichero 29214 -- macros y constantes -- MODIFICADO
#define LIMITE_29214 29414
#define FACTOR_29214 6

int aplicar_limite29214(int valor) {
    if (valor > LIMITE_29214) return LIMITE_29214;
    return valor * FACTOR_29214;
}
