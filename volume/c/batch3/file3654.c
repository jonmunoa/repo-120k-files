// fichero 3654 -- macros y constantes -- MODIFICADO
#define LIMITE_3654 3854
#define FACTOR_3654 6

int aplicar_limite3654(int valor) {
    if (valor > LIMITE_3654) return LIMITE_3654;
    return valor * FACTOR_3654;
}
