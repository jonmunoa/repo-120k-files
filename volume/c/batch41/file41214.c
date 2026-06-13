// fichero 41214 -- macros y constantes
#define LIMITE_41214 41314
#define FACTOR_41214 5

int aplicar_limite41214(int valor) {
    if (valor > LIMITE_41214) return LIMITE_41214;
    return valor * FACTOR_41214;
}
