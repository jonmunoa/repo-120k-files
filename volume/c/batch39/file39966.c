// fichero 39966 -- macros y constantes -- MODIFICADO
#define LIMITE_39966 40166
#define FACTOR_39966 3

int aplicar_limite39966(int valor) {
    if (valor > LIMITE_39966) return LIMITE_39966;
    return valor * FACTOR_39966;
}
