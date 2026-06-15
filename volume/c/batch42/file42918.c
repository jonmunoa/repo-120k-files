// fichero 42918 -- macros y constantes -- MODIFICADO
#define LIMITE_42918 43118
#define FACTOR_42918 5

int aplicar_limite42918(int valor) {
    if (valor > LIMITE_42918) return LIMITE_42918;
    return valor * FACTOR_42918;
}
