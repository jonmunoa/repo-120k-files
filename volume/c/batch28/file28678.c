// fichero 28678 -- macros y constantes -- MODIFICADO
#define LIMITE_28678 28878
#define FACTOR_28678 5

int aplicar_limite28678(int valor) {
    if (valor > LIMITE_28678) return LIMITE_28678;
    return valor * FACTOR_28678;
}
