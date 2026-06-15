// fichero 38558 -- macros y constantes -- MODIFICADO
#define LIMITE_38558 38758
#define FACTOR_38558 5

int aplicar_limite38558(int valor) {
    if (valor > LIMITE_38558) return LIMITE_38558;
    return valor * FACTOR_38558;
}
