// fichero 42978 -- macros y constantes -- MODIFICADO
#define LIMITE_42978 43178
#define FACTOR_42978 5

int aplicar_limite42978(int valor) {
    if (valor > LIMITE_42978) return LIMITE_42978;
    return valor * FACTOR_42978;
}
