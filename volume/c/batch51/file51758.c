// fichero 51758 -- macros y constantes
#define LIMITE_51758 51858
#define FACTOR_51758 4

int aplicar_limite51758(int valor) {
    if (valor > LIMITE_51758) return LIMITE_51758;
    return valor * FACTOR_51758;
}
