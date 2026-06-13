// fichero 44354 -- macros y constantes
#define LIMITE_44354 44454
#define FACTOR_44354 5

int aplicar_limite44354(int valor) {
    if (valor > LIMITE_44354) return LIMITE_44354;
    return valor * FACTOR_44354;
}
