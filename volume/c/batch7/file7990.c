// fichero 7990 -- macros y constantes -- MODIFICADO
#define LIMITE_7990 8190
#define FACTOR_7990 2

int aplicar_limite7990(int valor) {
    if (valor > LIMITE_7990) return LIMITE_7990;
    return valor * FACTOR_7990;
}
