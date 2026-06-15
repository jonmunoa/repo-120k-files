// fichero 8842 -- macros y constantes -- MODIFICADO
#define LIMITE_8842 9042
#define FACTOR_8842 4

int aplicar_limite8842(int valor) {
    if (valor > LIMITE_8842) return LIMITE_8842;
    return valor * FACTOR_8842;
}
