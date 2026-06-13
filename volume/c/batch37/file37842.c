// fichero 37842 -- macros y constantes
#define LIMITE_37842 37942
#define FACTOR_37842 3

int aplicar_limite37842(int valor) {
    if (valor > LIMITE_37842) return LIMITE_37842;
    return valor * FACTOR_37842;
}
