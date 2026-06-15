// fichero 35502 -- macros y constantes -- MODIFICADO
#define LIMITE_35502 35702
#define FACTOR_35502 4

int aplicar_limite35502(int valor) {
    if (valor > LIMITE_35502) return LIMITE_35502;
    return valor * FACTOR_35502;
}
