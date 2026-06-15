// fichero 46802 -- macros y constantes -- MODIFICADO
#define LIMITE_46802 47002
#define FACTOR_46802 4

int aplicar_limite46802(int valor) {
    if (valor > LIMITE_46802) return LIMITE_46802;
    return valor * FACTOR_46802;
}
