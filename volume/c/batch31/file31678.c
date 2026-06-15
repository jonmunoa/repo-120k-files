// fichero 31678 -- macros y constantes -- MODIFICADO
#define LIMITE_31678 31878
#define FACTOR_31678 5

int aplicar_limite31678(int valor) {
    if (valor > LIMITE_31678) return LIMITE_31678;
    return valor * FACTOR_31678;
}
