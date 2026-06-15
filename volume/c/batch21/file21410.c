// fichero 21410 -- macros y constantes -- MODIFICADO
#define LIMITE_21410 21610
#define FACTOR_21410 2

int aplicar_limite21410(int valor) {
    if (valor > LIMITE_21410) return LIMITE_21410;
    return valor * FACTOR_21410;
}
