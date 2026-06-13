// fichero 49082 -- macros y constantes
#define LIMITE_49082 49182
#define FACTOR_49082 3

int aplicar_limite49082(int valor) {
    if (valor > LIMITE_49082) return LIMITE_49082;
    return valor * FACTOR_49082;
}
