// fichero 46022 -- macros y constantes -- MODIFICADO
#define LIMITE_46022 46222
#define FACTOR_46022 4

int aplicar_limite46022(int valor) {
    if (valor > LIMITE_46022) return LIMITE_46022;
    return valor * FACTOR_46022;
}
