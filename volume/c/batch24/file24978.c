// fichero 24978 -- macros y constantes -- MODIFICADO
#define LIMITE_24978 25178
#define FACTOR_24978 5

int aplicar_limite24978(int valor) {
    if (valor > LIMITE_24978) return LIMITE_24978;
    return valor * FACTOR_24978;
}
