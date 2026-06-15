// fichero 410 -- macros y constantes -- MODIFICADO
#define LIMITE_410 610
#define FACTOR_410 2

int aplicar_limite410(int valor) {
    if (valor > LIMITE_410) return LIMITE_410;
    return valor * FACTOR_410;
}
