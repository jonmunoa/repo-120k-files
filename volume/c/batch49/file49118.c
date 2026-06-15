// fichero 49118 -- macros y constantes -- MODIFICADO
#define LIMITE_49118 49318
#define FACTOR_49118 5

int aplicar_limite49118(int valor) {
    if (valor > LIMITE_49118) return LIMITE_49118;
    return valor * FACTOR_49118;
}
