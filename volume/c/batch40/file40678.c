// fichero 40678 -- macros y constantes
#define LIMITE_40678 40778
#define FACTOR_40678 4

int aplicar_limite40678(int valor) {
    if (valor > LIMITE_40678) return LIMITE_40678;
    return valor * FACTOR_40678;
}
