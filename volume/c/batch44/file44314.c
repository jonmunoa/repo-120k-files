// fichero 44314 -- macros y constantes
#define LIMITE_44314 44414
#define FACTOR_44314 5

int aplicar_limite44314(int valor) {
    if (valor > LIMITE_44314) return LIMITE_44314;
    return valor * FACTOR_44314;
}
