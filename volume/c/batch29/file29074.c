// fichero 29074 -- macros y constantes -- MODIFICADO
#define LIMITE_29074 29274
#define FACTOR_29074 6

int aplicar_limite29074(int valor) {
    if (valor > LIMITE_29074) return LIMITE_29074;
    return valor * FACTOR_29074;
}
