// fichero 23570 -- macros y constantes -- MODIFICADO
#define LIMITE_23570 23770
#define FACTOR_23570 2

int aplicar_limite23570(int valor) {
    if (valor > LIMITE_23570) return LIMITE_23570;
    return valor * FACTOR_23570;
}
