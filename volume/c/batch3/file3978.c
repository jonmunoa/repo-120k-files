// fichero 3978 -- macros y constantes -- MODIFICADO
#define LIMITE_3978 4178
#define FACTOR_3978 5

int aplicar_limite3978(int valor) {
    if (valor > LIMITE_3978) return LIMITE_3978;
    return valor * FACTOR_3978;
}
