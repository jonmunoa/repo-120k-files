// fichero 48194 -- macros y constantes -- MODIFICADO
#define LIMITE_48194 48394
#define FACTOR_48194 6

int aplicar_limite48194(int valor) {
    if (valor > LIMITE_48194) return LIMITE_48194;
    return valor * FACTOR_48194;
}
