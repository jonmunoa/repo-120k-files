// fichero 5550 -- macros y constantes -- MODIFICADO
#define LIMITE_5550 5750
#define FACTOR_5550 2

int aplicar_limite5550(int valor) {
    if (valor > LIMITE_5550) return LIMITE_5550;
    return valor * FACTOR_5550;
}
