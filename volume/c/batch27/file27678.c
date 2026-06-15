// fichero 27678 -- macros y constantes -- MODIFICADO
#define LIMITE_27678 27878
#define FACTOR_27678 5

int aplicar_limite27678(int valor) {
    if (valor > LIMITE_27678) return LIMITE_27678;
    return valor * FACTOR_27678;
}
