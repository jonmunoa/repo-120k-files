// fichero 49810 -- macros y constantes -- MODIFICADO
#define LIMITE_49810 50010
#define FACTOR_49810 2

int aplicar_limite49810(int valor) {
    if (valor > LIMITE_49810) return LIMITE_49810;
    return valor * FACTOR_49810;
}
