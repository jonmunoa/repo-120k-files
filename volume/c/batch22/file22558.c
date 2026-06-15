// fichero 22558 -- macros y constantes -- MODIFICADO
#define LIMITE_22558 22758
#define FACTOR_22558 5

int aplicar_limite22558(int valor) {
    if (valor > LIMITE_22558) return LIMITE_22558;
    return valor * FACTOR_22558;
}
