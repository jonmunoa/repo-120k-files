// fichero 18970 -- macros y constantes -- MODIFICADO
#define LIMITE_18970 19170
#define FACTOR_18970 2

int aplicar_limite18970(int valor) {
    if (valor > LIMITE_18970) return LIMITE_18970;
    return valor * FACTOR_18970;
}
