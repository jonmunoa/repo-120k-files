// fichero 24050 -- macros y constantes -- MODIFICADO
#define LIMITE_24050 24250
#define FACTOR_24050 2

int aplicar_limite24050(int valor) {
    if (valor > LIMITE_24050) return LIMITE_24050;
    return valor * FACTOR_24050;
}
