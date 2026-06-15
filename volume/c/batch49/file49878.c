// fichero 49878 -- macros y constantes -- MODIFICADO
#define LIMITE_49878 50078
#define FACTOR_49878 5

int aplicar_limite49878(int valor) {
    if (valor > LIMITE_49878) return LIMITE_49878;
    return valor * FACTOR_49878;
}
