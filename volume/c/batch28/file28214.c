// fichero 28214 -- macros y constantes -- MODIFICADO
#define LIMITE_28214 28414
#define FACTOR_28214 6

int aplicar_limite28214(int valor) {
    if (valor > LIMITE_28214) return LIMITE_28214;
    return valor * FACTOR_28214;
}
