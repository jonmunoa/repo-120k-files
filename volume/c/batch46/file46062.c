// fichero 46062 -- macros y constantes -- MODIFICADO
#define LIMITE_46062 46262
#define FACTOR_46062 4

int aplicar_limite46062(int valor) {
    if (valor > LIMITE_46062) return LIMITE_46062;
    return valor * FACTOR_46062;
}
