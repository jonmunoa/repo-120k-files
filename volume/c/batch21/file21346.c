// fichero 21346 -- macros y constantes -- MODIFICADO
#define LIMITE_21346 21546
#define FACTOR_21346 3

int aplicar_limite21346(int valor) {
    if (valor > LIMITE_21346) return LIMITE_21346;
    return valor * FACTOR_21346;
}
