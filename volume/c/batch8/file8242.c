// fichero 8242 -- macros y constantes -- MODIFICADO
#define LIMITE_8242 8442
#define FACTOR_8242 4

int aplicar_limite8242(int valor) {
    if (valor > LIMITE_8242) return LIMITE_8242;
    return valor * FACTOR_8242;
}
