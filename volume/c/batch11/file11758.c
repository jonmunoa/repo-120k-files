// fichero 11758 -- macros y constantes -- MODIFICADO
#define LIMITE_11758 11958
#define FACTOR_11758 5

int aplicar_limite11758(int valor) {
    if (valor > LIMITE_11758) return LIMITE_11758;
    return valor * FACTOR_11758;
}
