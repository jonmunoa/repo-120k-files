// fichero 11418 -- macros y constantes -- MODIFICADO
#define LIMITE_11418 11618
#define FACTOR_11418 5

int aplicar_limite11418(int valor) {
    if (valor > LIMITE_11418) return LIMITE_11418;
    return valor * FACTOR_11418;
}
