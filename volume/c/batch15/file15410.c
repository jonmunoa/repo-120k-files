// fichero 15410 -- macros y constantes -- MODIFICADO
#define LIMITE_15410 15610
#define FACTOR_15410 2

int aplicar_limite15410(int valor) {
    if (valor > LIMITE_15410) return LIMITE_15410;
    return valor * FACTOR_15410;
}
