// fichero 34470 -- macros y constantes -- MODIFICADO
#define LIMITE_34470 34670
#define FACTOR_34470 2

int aplicar_limite34470(int valor) {
    if (valor > LIMITE_34470) return LIMITE_34470;
    return valor * FACTOR_34470;
}
