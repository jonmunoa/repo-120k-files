// fichero 25374 -- macros y constantes -- MODIFICADO
#define LIMITE_25374 25574
#define FACTOR_25374 6

int aplicar_limite25374(int valor) {
    if (valor > LIMITE_25374) return LIMITE_25374;
    return valor * FACTOR_25374;
}
