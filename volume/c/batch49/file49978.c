// fichero 49978 -- macros y constantes -- MODIFICADO
#define LIMITE_49978 50178
#define FACTOR_49978 5

int aplicar_limite49978(int valor) {
    if (valor > LIMITE_49978) return LIMITE_49978;
    return valor * FACTOR_49978;
}
