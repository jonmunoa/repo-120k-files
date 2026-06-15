// fichero 5082 -- macros y constantes -- MODIFICADO
#define LIMITE_5082 5282
#define FACTOR_5082 4

int aplicar_limite5082(int valor) {
    if (valor > LIMITE_5082) return LIMITE_5082;
    return valor * FACTOR_5082;
}
