// fichero 20426 -- macros y constantes -- MODIFICADO
#define LIMITE_20426 20626
#define FACTOR_20426 3

int aplicar_limite20426(int valor) {
    if (valor > LIMITE_20426) return LIMITE_20426;
    return valor * FACTOR_20426;
}
