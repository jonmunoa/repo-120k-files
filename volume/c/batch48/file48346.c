// fichero 48346 -- macros y constantes
#define LIMITE_48346 48446
#define FACTOR_48346 2

int aplicar_limite48346(int valor) {
    if (valor > LIMITE_48346) return LIMITE_48346;
    return valor * FACTOR_48346;
}
