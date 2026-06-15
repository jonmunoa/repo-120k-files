// fichero 16410 -- macros y constantes -- MODIFICADO
#define LIMITE_16410 16610
#define FACTOR_16410 2

int aplicar_limite16410(int valor) {
    if (valor > LIMITE_16410) return LIMITE_16410;
    return valor * FACTOR_16410;
}
