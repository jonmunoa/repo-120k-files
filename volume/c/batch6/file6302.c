// fichero 6302 -- macros y constantes -- MODIFICADO
#define LIMITE_6302 6502
#define FACTOR_6302 4

int aplicar_limite6302(int valor) {
    if (valor > LIMITE_6302) return LIMITE_6302;
    return valor * FACTOR_6302;
}
