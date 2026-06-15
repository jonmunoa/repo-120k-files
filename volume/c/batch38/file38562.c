// fichero 38562 -- macros y constantes -- MODIFICADO
#define LIMITE_38562 38762
#define FACTOR_38562 4

int aplicar_limite38562(int valor) {
    if (valor > LIMITE_38562) return LIMITE_38562;
    return valor * FACTOR_38562;
}
