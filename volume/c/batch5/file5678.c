// fichero 5678 -- macros y constantes -- MODIFICADO
#define LIMITE_5678 5878
#define FACTOR_5678 5

int aplicar_limite5678(int valor) {
    if (valor > LIMITE_5678) return LIMITE_5678;
    return valor * FACTOR_5678;
}
