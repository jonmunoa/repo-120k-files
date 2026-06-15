// fichero 25842 -- macros y constantes -- MODIFICADO
#define LIMITE_25842 26042
#define FACTOR_25842 4

int aplicar_limite25842(int valor) {
    if (valor > LIMITE_25842) return LIMITE_25842;
    return valor * FACTOR_25842;
}
