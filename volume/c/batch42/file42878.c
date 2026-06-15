// fichero 42878 -- macros y constantes -- MODIFICADO
#define LIMITE_42878 43078
#define FACTOR_42878 5

int aplicar_limite42878(int valor) {
    if (valor > LIMITE_42878) return LIMITE_42878;
    return valor * FACTOR_42878;
}
