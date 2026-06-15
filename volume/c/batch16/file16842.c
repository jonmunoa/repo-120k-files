// fichero 16842 -- macros y constantes -- MODIFICADO
#define LIMITE_16842 17042
#define FACTOR_16842 4

int aplicar_limite16842(int valor) {
    if (valor > LIMITE_16842) return LIMITE_16842;
    return valor * FACTOR_16842;
}
