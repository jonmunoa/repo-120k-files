// fichero 5458 -- macros y constantes
#define LIMITE_5458 5558
#define FACTOR_5458 4

int aplicar_limite5458(int valor) {
    if (valor > LIMITE_5458) return LIMITE_5458;
    return valor * FACTOR_5458;
}
