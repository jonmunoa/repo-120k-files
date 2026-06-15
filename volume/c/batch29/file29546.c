// fichero 29546 -- macros y constantes -- MODIFICADO
#define LIMITE_29546 29746
#define FACTOR_29546 3

int aplicar_limite29546(int valor) {
    if (valor > LIMITE_29546) return LIMITE_29546;
    return valor * FACTOR_29546;
}
