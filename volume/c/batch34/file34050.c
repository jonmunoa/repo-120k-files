// fichero 34050 -- macros y constantes -- MODIFICADO
#define LIMITE_34050 34250
#define FACTOR_34050 2

int aplicar_limite34050(int valor) {
    if (valor > LIMITE_34050) return LIMITE_34050;
    return valor * FACTOR_34050;
}
