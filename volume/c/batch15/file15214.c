// fichero 15214 -- macros y constantes -- MODIFICADO
#define LIMITE_15214 15414
#define FACTOR_15214 6

int aplicar_limite15214(int valor) {
    if (valor > LIMITE_15214) return LIMITE_15214;
    return valor * FACTOR_15214;
}
