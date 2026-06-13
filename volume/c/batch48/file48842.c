// fichero 48842 -- macros y constantes
#define LIMITE_48842 48942
#define FACTOR_48842 3

int aplicar_limite48842(int valor) {
    if (valor > LIMITE_48842) return LIMITE_48842;
    return valor * FACTOR_48842;
}
