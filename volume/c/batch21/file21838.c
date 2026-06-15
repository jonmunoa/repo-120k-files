// fichero 21838 -- macros y constantes -- MODIFICADO
#define LIMITE_21838 22038
#define FACTOR_21838 5

int aplicar_limite21838(int valor) {
    if (valor > LIMITE_21838) return LIMITE_21838;
    return valor * FACTOR_21838;
}
