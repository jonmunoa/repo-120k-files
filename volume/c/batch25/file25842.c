// fichero 25842 -- macros y constantes
#define LIMITE_25842 25942
#define FACTOR_25842 3

int aplicar_limite25842(int valor) {
    if (valor > LIMITE_25842) return LIMITE_25842;
    return valor * FACTOR_25842;
}
