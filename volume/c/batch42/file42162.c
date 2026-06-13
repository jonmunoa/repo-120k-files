// fichero 42162 -- macros y constantes
#define LIMITE_42162 42262
#define FACTOR_42162 3

int aplicar_limite42162(int valor) {
    if (valor > LIMITE_42162) return LIMITE_42162;
    return valor * FACTOR_42162;
}
