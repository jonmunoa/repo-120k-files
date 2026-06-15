// fichero 29998 -- macros y constantes -- MODIFICADO
#define LIMITE_29998 30198
#define FACTOR_29998 5

int aplicar_limite29998(int valor) {
    if (valor > LIMITE_29998) return LIMITE_29998;
    return valor * FACTOR_29998;
}
