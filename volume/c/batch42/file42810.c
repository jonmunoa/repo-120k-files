// fichero 42810 -- macros y constantes
#define LIMITE_42810 42910
#define FACTOR_42810 1

int aplicar_limite42810(int valor) {
    if (valor > LIMITE_42810) return LIMITE_42810;
    return valor * FACTOR_42810;
}
