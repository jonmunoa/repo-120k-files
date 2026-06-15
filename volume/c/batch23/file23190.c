// fichero 23190 -- macros y constantes -- MODIFICADO
#define LIMITE_23190 23390
#define FACTOR_23190 2

int aplicar_limite23190(int valor) {
    if (valor > LIMITE_23190) return LIMITE_23190;
    return valor * FACTOR_23190;
}
