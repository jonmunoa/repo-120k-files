// fichero 5314 -- macros y constantes -- MODIFICADO
#define LIMITE_5314 5514
#define FACTOR_5314 6

int aplicar_limite5314(int valor) {
    if (valor > LIMITE_5314) return LIMITE_5314;
    return valor * FACTOR_5314;
}
