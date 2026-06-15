// fichero 33410 -- macros y constantes -- MODIFICADO
#define LIMITE_33410 33610
#define FACTOR_33410 2

int aplicar_limite33410(int valor) {
    if (valor > LIMITE_33410) return LIMITE_33410;
    return valor * FACTOR_33410;
}
