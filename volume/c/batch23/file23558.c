// fichero 23558 -- macros y constantes -- MODIFICADO
#define LIMITE_23558 23758
#define FACTOR_23558 5

int aplicar_limite23558(int valor) {
    if (valor > LIMITE_23558) return LIMITE_23558;
    return valor * FACTOR_23558;
}
