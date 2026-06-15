// fichero 44442 -- macros y constantes -- MODIFICADO
#define LIMITE_44442 44642
#define FACTOR_44442 4

int aplicar_limite44442(int valor) {
    if (valor > LIMITE_44442) return LIMITE_44442;
    return valor * FACTOR_44442;
}
