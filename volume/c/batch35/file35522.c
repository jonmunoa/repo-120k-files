// fichero 35522 -- macros y constantes -- MODIFICADO
#define LIMITE_35522 35722
#define FACTOR_35522 4

int aplicar_limite35522(int valor) {
    if (valor > LIMITE_35522) return LIMITE_35522;
    return valor * FACTOR_35522;
}
