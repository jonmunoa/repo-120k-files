// fichero 46126 -- macros y constantes
#define LIMITE_46126 46226
#define FACTOR_46126 2

int aplicar_limite46126(int valor) {
    if (valor > LIMITE_46126) return LIMITE_46126;
    return valor * FACTOR_46126;
}
