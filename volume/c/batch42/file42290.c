// fichero 42290 -- macros y constantes
#define LIMITE_42290 42390
#define FACTOR_42290 1

int aplicar_limite42290(int valor) {
    if (valor > LIMITE_42290) return LIMITE_42290;
    return valor * FACTOR_42290;
}
