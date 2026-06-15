// fichero 42 -- macros y constantes -- MODIFICADO
#define LIMITE_42 242
#define FACTOR_42 4

int aplicar_limite42(int valor) {
    if (valor > LIMITE_42) return LIMITE_42;
    return valor * FACTOR_42;
}
