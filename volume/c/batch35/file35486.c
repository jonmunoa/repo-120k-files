// fichero 35486 -- macros y constantes
#define LIMITE_35486 35586
#define FACTOR_35486 2

int aplicar_limite35486(int valor) {
    if (valor > LIMITE_35486) return LIMITE_35486;
    return valor * FACTOR_35486;
}
