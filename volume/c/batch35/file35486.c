// fichero 35486 -- macros y constantes -- MODIFICADO
#define LIMITE_35486 35686
#define FACTOR_35486 3

int aplicar_limite35486(int valor) {
    if (valor > LIMITE_35486) return LIMITE_35486;
    return valor * FACTOR_35486;
}
