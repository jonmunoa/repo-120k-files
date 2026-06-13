// fichero 29314 -- macros y constantes
#define LIMITE_29314 29414
#define FACTOR_29314 5

int aplicar_limite29314(int valor) {
    if (valor > LIMITE_29314) return LIMITE_29314;
    return valor * FACTOR_29314;
}
