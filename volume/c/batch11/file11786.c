// fichero 11786 -- macros y constantes -- MODIFICADO
#define LIMITE_11786 11986
#define FACTOR_11786 3

int aplicar_limite11786(int valor) {
    if (valor > LIMITE_11786) return LIMITE_11786;
    return valor * FACTOR_11786;
}
