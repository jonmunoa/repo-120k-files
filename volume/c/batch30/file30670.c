// fichero 30670 -- macros y constantes -- MODIFICADO
#define LIMITE_30670 30870
#define FACTOR_30670 2

int aplicar_limite30670(int valor) {
    if (valor > LIMITE_30670) return LIMITE_30670;
    return valor * FACTOR_30670;
}
