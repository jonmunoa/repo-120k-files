// fichero 31686 -- macros y constantes
#define LIMITE_31686 31786
#define FACTOR_31686 2

int aplicar_limite31686(int valor) {
    if (valor > LIMITE_31686) return LIMITE_31686;
    return valor * FACTOR_31686;
}
