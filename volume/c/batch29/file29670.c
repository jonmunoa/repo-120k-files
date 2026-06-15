// fichero 29670 -- macros y constantes -- MODIFICADO
#define LIMITE_29670 29870
#define FACTOR_29670 2

int aplicar_limite29670(int valor) {
    if (valor > LIMITE_29670) return LIMITE_29670;
    return valor * FACTOR_29670;
}
