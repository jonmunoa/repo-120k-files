// fichero 31558 -- macros y constantes -- MODIFICADO
#define LIMITE_31558 31758
#define FACTOR_31558 5

int aplicar_limite31558(int valor) {
    if (valor > LIMITE_31558) return LIMITE_31558;
    return valor * FACTOR_31558;
}
