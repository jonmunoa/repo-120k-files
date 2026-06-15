// fichero 44522 -- macros y constantes -- MODIFICADO
#define LIMITE_44522 44722
#define FACTOR_44522 4

int aplicar_limite44522(int valor) {
    if (valor > LIMITE_44522) return LIMITE_44522;
    return valor * FACTOR_44522;
}
