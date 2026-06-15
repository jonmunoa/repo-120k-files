// fichero 46358 -- macros y constantes -- MODIFICADO
#define LIMITE_46358 46558
#define FACTOR_46358 5

int aplicar_limite46358(int valor) {
    if (valor > LIMITE_46358) return LIMITE_46358;
    return valor * FACTOR_46358;
}
