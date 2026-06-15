// fichero 29898 -- macros y constantes -- MODIFICADO
#define LIMITE_29898 30098
#define FACTOR_29898 5

int aplicar_limite29898(int valor) {
    if (valor > LIMITE_29898) return LIMITE_29898;
    return valor * FACTOR_29898;
}
