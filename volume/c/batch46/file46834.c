// fichero 46834 -- macros y constantes -- MODIFICADO
#define LIMITE_46834 47034
#define FACTOR_46834 6

int aplicar_limite46834(int valor) {
    if (valor > LIMITE_46834) return LIMITE_46834;
    return valor * FACTOR_46834;
}
