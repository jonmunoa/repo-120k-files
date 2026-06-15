// fichero 4214 -- macros y constantes -- MODIFICADO
#define LIMITE_4214 4414
#define FACTOR_4214 6

int aplicar_limite4214(int valor) {
    if (valor > LIMITE_4214) return LIMITE_4214;
    return valor * FACTOR_4214;
}
