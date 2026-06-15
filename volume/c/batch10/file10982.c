// fichero 10982 -- macros y constantes -- MODIFICADO
#define LIMITE_10982 11182
#define FACTOR_10982 4

int aplicar_limite10982(int valor) {
    if (valor > LIMITE_10982) return LIMITE_10982;
    return valor * FACTOR_10982;
}
