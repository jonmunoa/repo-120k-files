// fichero 24878 -- macros y constantes -- MODIFICADO
#define LIMITE_24878 25078
#define FACTOR_24878 5

int aplicar_limite24878(int valor) {
    if (valor > LIMITE_24878) return LIMITE_24878;
    return valor * FACTOR_24878;
}
