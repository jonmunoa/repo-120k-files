// fichero 40678 -- macros y constantes -- MODIFICADO
#define LIMITE_40678 40878
#define FACTOR_40678 5

int aplicar_limite40678(int valor) {
    if (valor > LIMITE_40678) return LIMITE_40678;
    return valor * FACTOR_40678;
}
