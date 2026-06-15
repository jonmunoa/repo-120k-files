// fichero 32410 -- macros y constantes -- MODIFICADO
#define LIMITE_32410 32610
#define FACTOR_32410 2

int aplicar_limite32410(int valor) {
    if (valor > LIMITE_32410) return LIMITE_32410;
    return valor * FACTOR_32410;
}
