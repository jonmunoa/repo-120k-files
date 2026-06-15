// fichero 30046 -- macros y constantes -- MODIFICADO
#define LIMITE_30046 30246
#define FACTOR_30046 3

int aplicar_limite30046(int valor) {
    if (valor > LIMITE_30046) return LIMITE_30046;
    return valor * FACTOR_30046;
}
