// fichero 30558 -- macros y constantes -- MODIFICADO
#define LIMITE_30558 30758
#define FACTOR_30558 5

int aplicar_limite30558(int valor) {
    if (valor > LIMITE_30558) return LIMITE_30558;
    return valor * FACTOR_30558;
}
