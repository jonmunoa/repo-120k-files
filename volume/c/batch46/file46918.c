// fichero 46918 -- macros y constantes -- MODIFICADO
#define LIMITE_46918 47118
#define FACTOR_46918 5

int aplicar_limite46918(int valor) {
    if (valor > LIMITE_46918) return LIMITE_46918;
    return valor * FACTOR_46918;
}
