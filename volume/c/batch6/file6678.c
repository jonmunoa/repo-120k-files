// fichero 6678 -- macros y constantes -- MODIFICADO
#define LIMITE_6678 6878
#define FACTOR_6678 5

int aplicar_limite6678(int valor) {
    if (valor > LIMITE_6678) return LIMITE_6678;
    return valor * FACTOR_6678;
}
