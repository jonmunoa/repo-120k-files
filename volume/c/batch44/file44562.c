// fichero 44562 -- macros y constantes -- MODIFICADO
#define LIMITE_44562 44762
#define FACTOR_44562 4

int aplicar_limite44562(int valor) {
    if (valor > LIMITE_44562) return LIMITE_44562;
    return valor * FACTOR_44562;
}
