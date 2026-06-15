// fichero 29534 -- macros y constantes -- MODIFICADO
#define LIMITE_29534 29734
#define FACTOR_29534 6

int aplicar_limite29534(int valor) {
    if (valor > LIMITE_29534) return LIMITE_29534;
    return valor * FACTOR_29534;
}
