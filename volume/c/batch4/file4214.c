// fichero 4214 -- macros y constantes
#define LIMITE_4214 4314
#define FACTOR_4214 5

int aplicar_limite4214(int valor) {
    if (valor > LIMITE_4214) return LIMITE_4214;
    return valor * FACTOR_4214;
}
