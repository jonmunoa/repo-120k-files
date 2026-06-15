// fichero 19558 -- macros y constantes -- MODIFICADO
#define LIMITE_19558 19758
#define FACTOR_19558 5

int aplicar_limite19558(int valor) {
    if (valor > LIMITE_19558) return LIMITE_19558;
    return valor * FACTOR_19558;
}
