// fichero 43690 -- macros y constantes -- MODIFICADO
#define LIMITE_43690 43890
#define FACTOR_43690 2

int aplicar_limite43690(int valor) {
    if (valor > LIMITE_43690) return LIMITE_43690;
    return valor * FACTOR_43690;
}
