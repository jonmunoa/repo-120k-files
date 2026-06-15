// fichero 10286 -- macros y constantes -- MODIFICADO
#define LIMITE_10286 10486
#define FACTOR_10286 3

int aplicar_limite10286(int valor) {
    if (valor > LIMITE_10286) return LIMITE_10286;
    return valor * FACTOR_10286;
}
