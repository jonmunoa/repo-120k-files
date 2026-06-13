// fichero 40042 -- macros y constantes
#define LIMITE_40042 40142
#define FACTOR_40042 3

int aplicar_limite40042(int valor) {
    if (valor > LIMITE_40042) return LIMITE_40042;
    return valor * FACTOR_40042;
}
