// fichero 40162 -- macros y constantes
#define LIMITE_40162 40262
#define FACTOR_40162 3

int aplicar_limite40162(int valor) {
    if (valor > LIMITE_40162) return LIMITE_40162;
    return valor * FACTOR_40162;
}
