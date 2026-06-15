// fichero 17678 -- macros y constantes -- MODIFICADO
#define LIMITE_17678 17878
#define FACTOR_17678 5

int aplicar_limite17678(int valor) {
    if (valor > LIMITE_17678) return LIMITE_17678;
    return valor * FACTOR_17678;
}
