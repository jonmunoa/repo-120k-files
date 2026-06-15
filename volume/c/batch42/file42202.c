// fichero 42202 -- macros y constantes -- MODIFICADO
#define LIMITE_42202 42402
#define FACTOR_42202 4

int aplicar_limite42202(int valor) {
    if (valor > LIMITE_42202) return LIMITE_42202;
    return valor * FACTOR_42202;
}
