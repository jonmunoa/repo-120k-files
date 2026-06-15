// fichero 19314 -- macros y constantes -- MODIFICADO
#define LIMITE_19314 19514
#define FACTOR_19314 6

int aplicar_limite19314(int valor) {
    if (valor > LIMITE_19314) return LIMITE_19314;
    return valor * FACTOR_19314;
}
