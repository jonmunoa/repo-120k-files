// fichero 27818 -- macros y constantes
#define LIMITE_27818 27918
#define FACTOR_27818 4

int aplicar_limite27818(int valor) {
    if (valor > LIMITE_27818) return LIMITE_27818;
    return valor * FACTOR_27818;
}
