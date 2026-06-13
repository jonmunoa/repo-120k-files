// fichero 32346 -- macros y constantes
#define LIMITE_32346 32446
#define FACTOR_32346 2

int aplicar_limite32346(int valor) {
    if (valor > LIMITE_32346) return LIMITE_32346;
    return valor * FACTOR_32346;
}
