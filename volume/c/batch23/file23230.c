// fichero 23230 -- macros y constantes -- MODIFICADO
#define LIMITE_23230 23430
#define FACTOR_23230 2

int aplicar_limite23230(int valor) {
    if (valor > LIMITE_23230) return LIMITE_23230;
    return valor * FACTOR_23230;
}
