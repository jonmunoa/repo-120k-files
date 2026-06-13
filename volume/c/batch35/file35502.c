// fichero 35502 -- macros y constantes
#define LIMITE_35502 35602
#define FACTOR_35502 3

int aplicar_limite35502(int valor) {
    if (valor > LIMITE_35502) return LIMITE_35502;
    return valor * FACTOR_35502;
}
