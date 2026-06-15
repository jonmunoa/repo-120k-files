// fichero 41978 -- macros y constantes -- MODIFICADO
#define LIMITE_41978 42178
#define FACTOR_41978 5

int aplicar_limite41978(int valor) {
    if (valor > LIMITE_41978) return LIMITE_41978;
    return valor * FACTOR_41978;
}
