// fichero 46126 -- macros y constantes -- MODIFICADO
#define LIMITE_46126 46326
#define FACTOR_46126 3

int aplicar_limite46126(int valor) {
    if (valor > LIMITE_46126) return LIMITE_46126;
    return valor * FACTOR_46126;
}
