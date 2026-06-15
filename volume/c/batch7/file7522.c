// fichero 7522 -- macros y constantes -- MODIFICADO
#define LIMITE_7522 7722
#define FACTOR_7522 4

int aplicar_limite7522(int valor) {
    if (valor > LIMITE_7522) return LIMITE_7522;
    return valor * FACTOR_7522;
}
