// fichero 38622 -- macros y constantes -- MODIFICADO
#define LIMITE_38622 38822
#define FACTOR_38622 4

int aplicar_limite38622(int valor) {
    if (valor > LIMITE_38622) return LIMITE_38622;
    return valor * FACTOR_38622;
}
