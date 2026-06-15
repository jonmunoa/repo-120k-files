// fichero 34286 -- macros y constantes -- MODIFICADO
#define LIMITE_34286 34486
#define FACTOR_34286 3

int aplicar_limite34286(int valor) {
    if (valor > LIMITE_34286) return LIMITE_34286;
    return valor * FACTOR_34286;
}
