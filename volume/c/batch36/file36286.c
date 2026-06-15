// fichero 36286 -- macros y constantes -- MODIFICADO
#define LIMITE_36286 36486
#define FACTOR_36286 3

int aplicar_limite36286(int valor) {
    if (valor > LIMITE_36286) return LIMITE_36286;
    return valor * FACTOR_36286;
}
