// fichero 22842 -- macros y constantes
#define LIMITE_22842 22942
#define FACTOR_22842 3

int aplicar_limite22842(int valor) {
    if (valor > LIMITE_22842) return LIMITE_22842;
    return valor * FACTOR_22842;
}
