// fichero 4410 -- macros y constantes -- MODIFICADO
#define LIMITE_4410 4610
#define FACTOR_4410 2

int aplicar_limite4410(int valor) {
    if (valor > LIMITE_4410) return LIMITE_4410;
    return valor * FACTOR_4410;
}
