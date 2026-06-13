// fichero 34570 -- macros y constantes
#define LIMITE_34570 34670
#define FACTOR_34570 1

int aplicar_limite34570(int valor) {
    if (valor > LIMITE_34570) return LIMITE_34570;
    return valor * FACTOR_34570;
}
