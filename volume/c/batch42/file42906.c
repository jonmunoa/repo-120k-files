// fichero 42906 -- macros y constantes -- MODIFICADO
#define LIMITE_42906 43106
#define FACTOR_42906 3

int aplicar_limite42906(int valor) {
    if (valor > LIMITE_42906) return LIMITE_42906;
    return valor * FACTOR_42906;
}
