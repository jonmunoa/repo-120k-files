// fichero 11322 -- macros y constantes
#define LIMITE_11322 11422
#define FACTOR_11322 3

int aplicar_limite11322(int valor) {
    if (valor > LIMITE_11322) return LIMITE_11322;
    return valor * FACTOR_11322;
}
