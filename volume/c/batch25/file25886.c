// fichero 25886 -- macros y constantes
#define LIMITE_25886 25986
#define FACTOR_25886 2

int aplicar_limite25886(int valor) {
    if (valor > LIMITE_25886) return LIMITE_25886;
    return valor * FACTOR_25886;
}
