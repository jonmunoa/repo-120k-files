// fichero 34570 -- macros y constantes -- MODIFICADO
#define LIMITE_34570 34770
#define FACTOR_34570 2

int aplicar_limite34570(int valor) {
    if (valor > LIMITE_34570) return LIMITE_34570;
    return valor * FACTOR_34570;
}
