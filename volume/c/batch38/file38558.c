// fichero 38558 -- macros y constantes
#define LIMITE_38558 38658
#define FACTOR_38558 4

int aplicar_limite38558(int valor) {
    if (valor > LIMITE_38558) return LIMITE_38558;
    return valor * FACTOR_38558;
}
