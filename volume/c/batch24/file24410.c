// fichero 24410 -- macros y constantes -- MODIFICADO
#define LIMITE_24410 24610
#define FACTOR_24410 2

int aplicar_limite24410(int valor) {
    if (valor > LIMITE_24410) return LIMITE_24410;
    return valor * FACTOR_24410;
}
