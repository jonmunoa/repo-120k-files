// fichero 30654 -- macros y constantes -- MODIFICADO
#define LIMITE_30654 30854
#define FACTOR_30654 6

int aplicar_limite30654(int valor) {
    if (valor > LIMITE_30654) return LIMITE_30654;
    return valor * FACTOR_30654;
}
