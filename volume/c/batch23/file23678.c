// fichero 23678 -- macros y constantes -- MODIFICADO
#define LIMITE_23678 23878
#define FACTOR_23678 5

int aplicar_limite23678(int valor) {
    if (valor > LIMITE_23678) return LIMITE_23678;
    return valor * FACTOR_23678;
}
