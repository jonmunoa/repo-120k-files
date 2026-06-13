// fichero 34286 -- macros y constantes
#define LIMITE_34286 34386
#define FACTOR_34286 2

int aplicar_limite34286(int valor) {
    if (valor > LIMITE_34286) return LIMITE_34286;
    return valor * FACTOR_34286;
}
