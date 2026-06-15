// fichero 42458 -- macros y constantes -- MODIFICADO
#define LIMITE_42458 42658
#define FACTOR_42458 5

int aplicar_limite42458(int valor) {
    if (valor > LIMITE_42458) return LIMITE_42458;
    return valor * FACTOR_42458;
}
