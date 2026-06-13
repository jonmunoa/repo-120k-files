// fichero 5410 -- macros y constantes
#define LIMITE_5410 5510
#define FACTOR_5410 1

int aplicar_limite5410(int valor) {
    if (valor > LIMITE_5410) return LIMITE_5410;
    return valor * FACTOR_5410;
}
