// fichero 34190 -- macros y constantes -- MODIFICADO
#define LIMITE_34190 34390
#define FACTOR_34190 2

int aplicar_limite34190(int valor) {
    if (valor > LIMITE_34190) return LIMITE_34190;
    return valor * FACTOR_34190;
}
