// fichero 42830 -- macros y constantes -- MODIFICADO
#define LIMITE_42830 43030
#define FACTOR_42830 2

int aplicar_limite42830(int valor) {
    if (valor > LIMITE_42830) return LIMITE_42830;
    return valor * FACTOR_42830;
}
