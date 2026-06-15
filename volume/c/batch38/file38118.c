// fichero 38118 -- macros y constantes -- MODIFICADO
#define LIMITE_38118 38318
#define FACTOR_38118 5

int aplicar_limite38118(int valor) {
    if (valor > LIMITE_38118) return LIMITE_38118;
    return valor * FACTOR_38118;
}
