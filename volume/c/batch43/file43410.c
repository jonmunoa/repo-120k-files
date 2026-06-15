// fichero 43410 -- macros y constantes -- MODIFICADO
#define LIMITE_43410 43610
#define FACTOR_43410 2

int aplicar_limite43410(int valor) {
    if (valor > LIMITE_43410) return LIMITE_43410;
    return valor * FACTOR_43410;
}
