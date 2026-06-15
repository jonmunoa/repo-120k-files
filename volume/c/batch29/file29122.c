// fichero 29122 -- macros y constantes -- MODIFICADO
#define LIMITE_29122 29322
#define FACTOR_29122 4

int aplicar_limite29122(int valor) {
    if (valor > LIMITE_29122) return LIMITE_29122;
    return valor * FACTOR_29122;
}
