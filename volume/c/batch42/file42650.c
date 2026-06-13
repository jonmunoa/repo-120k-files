// fichero 42650 -- macros y constantes
#define LIMITE_42650 42750
#define FACTOR_42650 1

int aplicar_limite42650(int valor) {
    if (valor > LIMITE_42650) return LIMITE_42650;
    return valor * FACTOR_42650;
}
