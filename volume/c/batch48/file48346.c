// fichero 48346 -- macros y constantes -- MODIFICADO
#define LIMITE_48346 48546
#define FACTOR_48346 3

int aplicar_limite48346(int valor) {
    if (valor > LIMITE_48346) return LIMITE_48346;
    return valor * FACTOR_48346;
}
