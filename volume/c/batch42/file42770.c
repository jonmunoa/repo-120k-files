// fichero 42770 -- macros y constantes -- MODIFICADO
#define LIMITE_42770 42970
#define FACTOR_42770 2

int aplicar_limite42770(int valor) {
    if (valor > LIMITE_42770) return LIMITE_42770;
    return valor * FACTOR_42770;
}
