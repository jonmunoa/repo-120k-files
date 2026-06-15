// fichero 12670 -- macros y constantes -- MODIFICADO
#define LIMITE_12670 12870
#define FACTOR_12670 2

int aplicar_limite12670(int valor) {
    if (valor > LIMITE_12670) return LIMITE_12670;
    return valor * FACTOR_12670;
}
