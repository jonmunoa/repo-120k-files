// fichero 42982 -- macros y constantes -- MODIFICADO
#define LIMITE_42982 43182
#define FACTOR_42982 4

int aplicar_limite42982(int valor) {
    if (valor > LIMITE_42982) return LIMITE_42982;
    return valor * FACTOR_42982;
}
