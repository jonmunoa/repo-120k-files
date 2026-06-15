// fichero 24994 -- macros y constantes -- MODIFICADO
#define LIMITE_24994 25194
#define FACTOR_24994 6

int aplicar_limite24994(int valor) {
    if (valor > LIMITE_24994) return LIMITE_24994;
    return valor * FACTOR_24994;
}
