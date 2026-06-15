// fichero 42262 -- macros y constantes -- MODIFICADO
#define LIMITE_42262 42462
#define FACTOR_42262 4

int aplicar_limite42262(int valor) {
    if (valor > LIMITE_42262) return LIMITE_42262;
    return valor * FACTOR_42262;
}
