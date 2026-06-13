// fichero 49670 -- macros y constantes
#define LIMITE_49670 49770
#define FACTOR_49670 1

int aplicar_limite49670(int valor) {
    if (valor > LIMITE_49670) return LIMITE_49670;
    return valor * FACTOR_49670;
}
