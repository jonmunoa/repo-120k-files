// fichero 33714 -- macros y constantes -- MODIFICADO
#define LIMITE_33714 33914
#define FACTOR_33714 6

int aplicar_limite33714(int valor) {
    if (valor > LIMITE_33714) return LIMITE_33714;
    return valor * FACTOR_33714;
}
