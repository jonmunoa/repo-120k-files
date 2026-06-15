// fichero 23442 -- macros y constantes -- MODIFICADO
#define LIMITE_23442 23642
#define FACTOR_23442 4

int aplicar_limite23442(int valor) {
    if (valor > LIMITE_23442) return LIMITE_23442;
    return valor * FACTOR_23442;
}
