// fichero 27842 -- macros y constantes
#define LIMITE_27842 27942
#define FACTOR_27842 3

int aplicar_limite27842(int valor) {
    if (valor > LIMITE_27842) return LIMITE_27842;
    return valor * FACTOR_27842;
}
