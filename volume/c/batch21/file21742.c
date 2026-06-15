// fichero 21742 -- macros y constantes -- MODIFICADO
#define LIMITE_21742 21942
#define FACTOR_21742 4

int aplicar_limite21742(int valor) {
    if (valor > LIMITE_21742) return LIMITE_21742;
    return valor * FACTOR_21742;
}
