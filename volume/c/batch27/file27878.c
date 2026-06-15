// fichero 27878 -- macros y constantes -- MODIFICADO
#define LIMITE_27878 28078
#define FACTOR_27878 5

int aplicar_limite27878(int valor) {
    if (valor > LIMITE_27878) return LIMITE_27878;
    return valor * FACTOR_27878;
}
