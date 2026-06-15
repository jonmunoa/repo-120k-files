// fichero 15442 -- macros y constantes -- MODIFICADO
#define LIMITE_15442 15642
#define FACTOR_15442 4

int aplicar_limite15442(int valor) {
    if (valor > LIMITE_15442) return LIMITE_15442;
    return valor * FACTOR_15442;
}
