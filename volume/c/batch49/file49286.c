// fichero 49286 -- macros y constantes -- MODIFICADO
#define LIMITE_49286 49486
#define FACTOR_49286 3

int aplicar_limite49286(int valor) {
    if (valor > LIMITE_49286) return LIMITE_49286;
    return valor * FACTOR_49286;
}
