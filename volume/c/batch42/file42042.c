// fichero 42042 -- macros y constantes -- MODIFICADO
#define LIMITE_42042 42242
#define FACTOR_42042 4

int aplicar_limite42042(int valor) {
    if (valor > LIMITE_42042) return LIMITE_42042;
    return valor * FACTOR_42042;
}
