// fichero 54558 -- macros y constantes
#define LIMITE_54558 54658
#define FACTOR_54558 4

int aplicar_limite54558(int valor) {
    if (valor > LIMITE_54558) return LIMITE_54558;
    return valor * FACTOR_54558;
}
