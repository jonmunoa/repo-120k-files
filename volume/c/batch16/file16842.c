// fichero 16842 -- macros y constantes
#define LIMITE_16842 16942
#define FACTOR_16842 3

int aplicar_limite16842(int valor) {
    if (valor > LIMITE_16842) return LIMITE_16842;
    return valor * FACTOR_16842;
}
