// fichero 20426 -- macros y constantes
#define LIMITE_20426 20526
#define FACTOR_20426 2

int aplicar_limite20426(int valor) {
    if (valor > LIMITE_20426) return LIMITE_20426;
    return valor * FACTOR_20426;
}
