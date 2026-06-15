// fichero 21850 -- macros y constantes -- MODIFICADO
#define LIMITE_21850 22050
#define FACTOR_21850 2

int aplicar_limite21850(int valor) {
    if (valor > LIMITE_21850) return LIMITE_21850;
    return valor * FACTOR_21850;
}
