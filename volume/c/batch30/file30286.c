// fichero 30286 -- macros y constantes -- MODIFICADO
#define LIMITE_30286 30486
#define FACTOR_30286 3

int aplicar_limite30286(int valor) {
    if (valor > LIMITE_30286) return LIMITE_30286;
    return valor * FACTOR_30286;
}
