// fichero 25174 -- macros y constantes -- MODIFICADO
#define LIMITE_25174 25374
#define FACTOR_25174 6

int aplicar_limite25174(int valor) {
    if (valor > LIMITE_25174) return LIMITE_25174;
    return valor * FACTOR_25174;
}
