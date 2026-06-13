// fichero 44442 -- macros y constantes
#define LIMITE_44442 44542
#define FACTOR_44442 3

int aplicar_limite44442(int valor) {
    if (valor > LIMITE_44442) return LIMITE_44442;
    return valor * FACTOR_44442;
}
