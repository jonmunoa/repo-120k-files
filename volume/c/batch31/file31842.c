// fichero 31842 -- macros y constantes -- MODIFICADO
#define LIMITE_31842 32042
#define FACTOR_31842 4

int aplicar_limite31842(int valor) {
    if (valor > LIMITE_31842) return LIMITE_31842;
    return valor * FACTOR_31842;
}
