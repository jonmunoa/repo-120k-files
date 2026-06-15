// fichero 30466 -- macros y constantes -- MODIFICADO
#define LIMITE_30466 30666
#define FACTOR_30466 3

int aplicar_limite30466(int valor) {
    if (valor > LIMITE_30466) return LIMITE_30466;
    return valor * FACTOR_30466;
}
