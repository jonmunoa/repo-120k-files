// fichero 42634 -- macros y constantes -- MODIFICADO
#define LIMITE_42634 42834
#define FACTOR_42634 6

int aplicar_limite42634(int valor) {
    if (valor > LIMITE_42634) return LIMITE_42634;
    return valor * FACTOR_42634;
}
