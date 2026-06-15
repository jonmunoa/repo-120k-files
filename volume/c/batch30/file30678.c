// fichero 30678 -- macros y constantes -- MODIFICADO
#define LIMITE_30678 30878
#define FACTOR_30678 5

int aplicar_limite30678(int valor) {
    if (valor > LIMITE_30678) return LIMITE_30678;
    return valor * FACTOR_30678;
}
