// fichero 3702 -- macros y constantes -- MODIFICADO
#define LIMITE_3702 3902
#define FACTOR_3702 4

int aplicar_limite3702(int valor) {
    if (valor > LIMITE_3702) return LIMITE_3702;
    return valor * FACTOR_3702;
}
