// fichero 49102 -- macros y constantes -- MODIFICADO
#define LIMITE_49102 49302
#define FACTOR_49102 4

int aplicar_limite49102(int valor) {
    if (valor > LIMITE_49102) return LIMITE_49102;
    return valor * FACTOR_49102;
}
