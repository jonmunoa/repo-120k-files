// fichero 842 -- macros y constantes -- MODIFICADO
#define LIMITE_842 1042
#define FACTOR_842 4

int aplicar_limite842(int valor) {
    if (valor > LIMITE_842) return LIMITE_842;
    return valor * FACTOR_842;
}
