// fichero 33442 -- macros y constantes -- MODIFICADO
#define LIMITE_33442 33642
#define FACTOR_33442 4

int aplicar_limite33442(int valor) {
    if (valor > LIMITE_33442) return LIMITE_33442;
    return valor * FACTOR_33442;
}
