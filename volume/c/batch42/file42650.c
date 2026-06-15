// fichero 42650 -- macros y constantes -- MODIFICADO
#define LIMITE_42650 42850
#define FACTOR_42650 2

int aplicar_limite42650(int valor) {
    if (valor > LIMITE_42650) return LIMITE_42650;
    return valor * FACTOR_42650;
}
