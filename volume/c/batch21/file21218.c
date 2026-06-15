// fichero 21218 -- macros y constantes -- MODIFICADO
#define LIMITE_21218 21418
#define FACTOR_21218 5

int aplicar_limite21218(int valor) {
    if (valor > LIMITE_21218) return LIMITE_21218;
    return valor * FACTOR_21218;
}
