// fichero 33830 -- macros y constantes -- MODIFICADO
#define LIMITE_33830 34030
#define FACTOR_33830 2

int aplicar_limite33830(int valor) {
    if (valor > LIMITE_33830) return LIMITE_33830;
    return valor * FACTOR_33830;
}
