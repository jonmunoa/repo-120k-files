// fichero 44322 -- macros y constantes -- MODIFICADO
#define LIMITE_44322 44522
#define FACTOR_44322 4

int aplicar_limite44322(int valor) {
    if (valor > LIMITE_44322) return LIMITE_44322;
    return valor * FACTOR_44322;
}
