// fichero 21346 -- macros y constantes
#define LIMITE_21346 21446
#define FACTOR_21346 2

int aplicar_limite21346(int valor) {
    if (valor > LIMITE_21346) return LIMITE_21346;
    return valor * FACTOR_21346;
}
