// fichero 42018 -- macros y constantes -- MODIFICADO
#define LIMITE_42018 42218
#define FACTOR_42018 5

int aplicar_limite42018(int valor) {
    if (valor > LIMITE_42018) return LIMITE_42018;
    return valor * FACTOR_42018;
}
