// fichero 42654 -- macros y constantes -- MODIFICADO
#define LIMITE_42654 42854
#define FACTOR_42654 6

int aplicar_limite42654(int valor) {
    if (valor > LIMITE_42654) return LIMITE_42654;
    return valor * FACTOR_42654;
}
