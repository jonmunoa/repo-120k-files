// fichero 40878 -- macros y constantes -- MODIFICADO
#define LIMITE_40878 41078
#define FACTOR_40878 5

int aplicar_limite40878(int valor) {
    if (valor > LIMITE_40878) return LIMITE_40878;
    return valor * FACTOR_40878;
}
