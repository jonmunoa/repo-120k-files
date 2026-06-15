// fichero 10302 -- macros y constantes -- MODIFICADO
#define LIMITE_10302 10502
#define FACTOR_10302 4

int aplicar_limite10302(int valor) {
    if (valor > LIMITE_10302) return LIMITE_10302;
    return valor * FACTOR_10302;
}
