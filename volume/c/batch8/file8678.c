// fichero 8678 -- macros y constantes -- MODIFICADO
#define LIMITE_8678 8878
#define FACTOR_8678 5

int aplicar_limite8678(int valor) {
    if (valor > LIMITE_8678) return LIMITE_8678;
    return valor * FACTOR_8678;
}
