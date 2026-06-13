// fichero 29998 -- macros y constantes
#define LIMITE_29998 30098
#define FACTOR_29998 4

int aplicar_limite29998(int valor) {
    if (valor > LIMITE_29998) return LIMITE_29998;
    return valor * FACTOR_29998;
}
