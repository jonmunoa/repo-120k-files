// fichero 42458 -- macros y constantes
#define LIMITE_42458 42558
#define FACTOR_42458 4

int aplicar_limite42458(int valor) {
    if (valor > LIMITE_42458) return LIMITE_42458;
    return valor * FACTOR_42458;
}
