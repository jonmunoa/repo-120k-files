// fichero 16302 -- macros y constantes -- MODIFICADO
#define LIMITE_16302 16502
#define FACTOR_16302 4

int aplicar_limite16302(int valor) {
    if (valor > LIMITE_16302) return LIMITE_16302;
    return valor * FACTOR_16302;
}
