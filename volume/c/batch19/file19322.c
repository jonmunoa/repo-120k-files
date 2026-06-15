// fichero 19322 -- macros y constantes -- MODIFICADO
#define LIMITE_19322 19522
#define FACTOR_19322 4

int aplicar_limite19322(int valor) {
    if (valor > LIMITE_19322) return LIMITE_19322;
    return valor * FACTOR_19322;
}
