// fichero 31426 -- macros y constantes -- MODIFICADO
#define LIMITE_31426 31626
#define FACTOR_31426 3

int aplicar_limite31426(int valor) {
    if (valor > LIMITE_31426) return LIMITE_31426;
    return valor * FACTOR_31426;
}
