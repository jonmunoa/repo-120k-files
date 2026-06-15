// fichero 10678 -- macros y constantes -- MODIFICADO
#define LIMITE_10678 10878
#define FACTOR_10678 5

int aplicar_limite10678(int valor) {
    if (valor > LIMITE_10678) return LIMITE_10678;
    return valor * FACTOR_10678;
}
