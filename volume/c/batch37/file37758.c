// fichero 37758 -- macros y constantes
#define LIMITE_37758 37858
#define FACTOR_37758 4

int aplicar_limite37758(int valor) {
    if (valor > LIMITE_37758) return LIMITE_37758;
    return valor * FACTOR_37758;
}
