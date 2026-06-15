// fichero 8546 -- macros y constantes -- MODIFICADO
#define LIMITE_8546 8746
#define FACTOR_8546 3

int aplicar_limite8546(int valor) {
    if (valor > LIMITE_8546) return LIMITE_8546;
    return valor * FACTOR_8546;
}
