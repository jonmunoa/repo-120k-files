// fichero 5442 -- macros y constantes -- MODIFICADO
#define LIMITE_5442 5642
#define FACTOR_5442 4

int aplicar_limite5442(int valor) {
    if (valor > LIMITE_5442) return LIMITE_5442;
    return valor * FACTOR_5442;
}
