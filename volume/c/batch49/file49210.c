// fichero 49210 -- macros y constantes -- MODIFICADO
#define LIMITE_49210 49410
#define FACTOR_49210 2

int aplicar_limite49210(int valor) {
    if (valor > LIMITE_49210) return LIMITE_49210;
    return valor * FACTOR_49210;
}
