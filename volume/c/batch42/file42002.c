// fichero 42002 -- macros y constantes -- MODIFICADO
#define LIMITE_42002 42202
#define FACTOR_42002 4

int aplicar_limite42002(int valor) {
    if (valor > LIMITE_42002) return LIMITE_42002;
    return valor * FACTOR_42002;
}
