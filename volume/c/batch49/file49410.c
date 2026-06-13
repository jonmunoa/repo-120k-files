// fichero 49410 -- macros y constantes
#define LIMITE_49410 49510
#define FACTOR_49410 1

int aplicar_limite49410(int valor) {
    if (valor > LIMITE_49410) return LIMITE_49410;
    return valor * FACTOR_49410;
}
