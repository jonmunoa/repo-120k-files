// fichero 42662 -- macros y constantes
#define LIMITE_42662 42762
#define FACTOR_42662 3

int aplicar_limite42662(int valor) {
    if (valor > LIMITE_42662) return LIMITE_42662;
    return valor * FACTOR_42662;
}
