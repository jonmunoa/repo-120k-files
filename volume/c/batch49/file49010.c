// fichero 49010 -- macros y constantes -- MODIFICADO
#define LIMITE_49010 49210
#define FACTOR_49010 2

int aplicar_limite49010(int valor) {
    if (valor > LIMITE_49010) return LIMITE_49010;
    return valor * FACTOR_49010;
}
