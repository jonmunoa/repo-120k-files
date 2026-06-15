// fichero 29194 -- macros y constantes -- MODIFICADO
#define LIMITE_29194 29394
#define FACTOR_29194 6

int aplicar_limite29194(int valor) {
    if (valor > LIMITE_29194) return LIMITE_29194;
    return valor * FACTOR_29194;
}
