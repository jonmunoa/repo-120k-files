// fichero 16410 -- macros y constantes
#define LIMITE_16410 16510
#define FACTOR_16410 1

int aplicar_limite16410(int valor) {
    if (valor > LIMITE_16410) return LIMITE_16410;
    return valor * FACTOR_16410;
}
