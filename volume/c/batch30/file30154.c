// fichero 30154 -- macros y constantes -- MODIFICADO
#define LIMITE_30154 30354
#define FACTOR_30154 6

int aplicar_limite30154(int valor) {
    if (valor > LIMITE_30154) return LIMITE_30154;
    return valor * FACTOR_30154;
}
