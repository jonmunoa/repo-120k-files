// fichero 35410 -- macros y constantes -- MODIFICADO
#define LIMITE_35410 35610
#define FACTOR_35410 2

int aplicar_limite35410(int valor) {
    if (valor > LIMITE_35410) return LIMITE_35410;
    return valor * FACTOR_35410;
}
