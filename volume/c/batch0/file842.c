// fichero 842 -- macros y constantes
#define LIMITE_842 942
#define FACTOR_842 3

int aplicar_limite842(int valor) {
    if (valor > LIMITE_842) return LIMITE_842;
    return valor * FACTOR_842;
}
