// fichero 12002 -- macros y constantes -- MODIFICADO
#define LIMITE_12002 12202
#define FACTOR_12002 4

int aplicar_limite12002(int valor) {
    if (valor > LIMITE_12002) return LIMITE_12002;
    return valor * FACTOR_12002;
}
