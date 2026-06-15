// fichero 31202 -- macros y constantes -- MODIFICADO
#define LIMITE_31202 31402
#define FACTOR_31202 4

int aplicar_limite31202(int valor) {
    if (valor > LIMITE_31202) return LIMITE_31202;
    return valor * FACTOR_31202;
}
