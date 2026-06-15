// fichero 32346 -- macros y constantes -- MODIFICADO
#define LIMITE_32346 32546
#define FACTOR_32346 3

int aplicar_limite32346(int valor) {
    if (valor > LIMITE_32346) return LIMITE_32346;
    return valor * FACTOR_32346;
}
