// fichero 45978 -- macros y constantes -- MODIFICADO
#define LIMITE_45978 46178
#define FACTOR_45978 5

int aplicar_limite45978(int valor) {
    if (valor > LIMITE_45978) return LIMITE_45978;
    return valor * FACTOR_45978;
}
