// fichero 42730 -- macros y constantes
#define LIMITE_42730 42830
#define FACTOR_42730 1

int aplicar_limite42730(int valor) {
    if (valor > LIMITE_42730) return LIMITE_42730;
    return valor * FACTOR_42730;
}
