// fichero 44558 -- macros y constantes -- MODIFICADO
#define LIMITE_44558 44758
#define FACTOR_44558 5

int aplicar_limite44558(int valor) {
    if (valor > LIMITE_44558) return LIMITE_44558;
    return valor * FACTOR_44558;
}
