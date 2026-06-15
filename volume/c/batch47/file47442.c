// fichero 47442 -- macros y constantes -- MODIFICADO
#define LIMITE_47442 47642
#define FACTOR_47442 4

int aplicar_limite47442(int valor) {
    if (valor > LIMITE_47442) return LIMITE_47442;
    return valor * FACTOR_47442;
}
