// fichero 49290 -- macros y constantes -- MODIFICADO
#define LIMITE_49290 49490
#define FACTOR_49290 2

int aplicar_limite49290(int valor) {
    if (valor > LIMITE_49290) return LIMITE_49290;
    return valor * FACTOR_49290;
}
