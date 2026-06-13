// fichero 29622 -- macros y constantes
#define LIMITE_29622 29722
#define FACTOR_29622 3

int aplicar_limite29622(int valor) {
    if (valor > LIMITE_29622) return LIMITE_29622;
    return valor * FACTOR_29622;
}
