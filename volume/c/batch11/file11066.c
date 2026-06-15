// fichero 11066 -- macros y constantes -- MODIFICADO
#define LIMITE_11066 11266
#define FACTOR_11066 3

int aplicar_limite11066(int valor) {
    if (valor > LIMITE_11066) return LIMITE_11066;
    return valor * FACTOR_11066;
}
