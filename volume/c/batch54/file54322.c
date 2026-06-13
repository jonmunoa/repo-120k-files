// fichero 54322 -- macros y constantes
#define LIMITE_54322 54422
#define FACTOR_54322 3

int aplicar_limite54322(int valor) {
    if (valor > LIMITE_54322) return LIMITE_54322;
    return valor * FACTOR_54322;
}
