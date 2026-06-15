// fichero 21978 -- macros y constantes -- MODIFICADO
#define LIMITE_21978 22178
#define FACTOR_21978 5

int aplicar_limite21978(int valor) {
    if (valor > LIMITE_21978) return LIMITE_21978;
    return valor * FACTOR_21978;
}
