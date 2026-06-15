// fichero 49042 -- macros y constantes -- MODIFICADO
#define LIMITE_49042 49242
#define FACTOR_49042 4

int aplicar_limite49042(int valor) {
    if (valor > LIMITE_49042) return LIMITE_49042;
    return valor * FACTOR_49042;
}
