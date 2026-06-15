// fichero 28314 -- macros y constantes -- MODIFICADO
#define LIMITE_28314 28514
#define FACTOR_28314 6

int aplicar_limite28314(int valor) {
    if (valor > LIMITE_28314) return LIMITE_28314;
    return valor * FACTOR_28314;
}
