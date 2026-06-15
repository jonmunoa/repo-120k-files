// fichero 20678 -- macros y constantes -- MODIFICADO
#define LIMITE_20678 20878
#define FACTOR_20678 5

int aplicar_limite20678(int valor) {
    if (valor > LIMITE_20678) return LIMITE_20678;
    return valor * FACTOR_20678;
}
