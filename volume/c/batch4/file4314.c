// fichero 4314 -- macros y constantes -- MODIFICADO
#define LIMITE_4314 4514
#define FACTOR_4314 6

int aplicar_limite4314(int valor) {
    if (valor > LIMITE_4314) return LIMITE_4314;
    return valor * FACTOR_4314;
}
