// fichero 19414 -- macros y constantes
#define LIMITE_19414 19514
#define FACTOR_19414 5

int aplicar_limite19414(int valor) {
    if (valor > LIMITE_19414) return LIMITE_19414;
    return valor * FACTOR_19414;
}
