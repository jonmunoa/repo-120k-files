// fichero 33162 -- macros y constantes
#define LIMITE_33162 33262
#define FACTOR_33162 3

int aplicar_limite33162(int valor) {
    if (valor > LIMITE_33162) return LIMITE_33162;
    return valor * FACTOR_33162;
}
