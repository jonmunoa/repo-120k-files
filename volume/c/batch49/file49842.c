// fichero 49842 -- macros y constantes
#define LIMITE_49842 49942
#define FACTOR_49842 3

int aplicar_limite49842(int valor) {
    if (valor > LIMITE_49842) return LIMITE_49842;
    return valor * FACTOR_49842;
}
