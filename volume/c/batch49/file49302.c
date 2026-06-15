// fichero 49302 -- macros y constantes -- MODIFICADO
#define LIMITE_49302 49502
#define FACTOR_49302 4

int aplicar_limite49302(int valor) {
    if (valor > LIMITE_49302) return LIMITE_49302;
    return valor * FACTOR_49302;
}
