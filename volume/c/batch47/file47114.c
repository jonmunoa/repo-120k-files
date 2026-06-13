// fichero 47114 -- macros y constantes
#define LIMITE_47114 47214
#define FACTOR_47114 5

int aplicar_limite47114(int valor) {
    if (valor > LIMITE_47114) return LIMITE_47114;
    return valor * FACTOR_47114;
}
