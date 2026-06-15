// fichero 49670 -- macros y constantes -- MODIFICADO
#define LIMITE_49670 49870
#define FACTOR_49670 2

int aplicar_limite49670(int valor) {
    if (valor > LIMITE_49670) return LIMITE_49670;
    return valor * FACTOR_49670;
}
