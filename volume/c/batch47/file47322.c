// fichero 47322 -- macros y constantes
#define LIMITE_47322 47422
#define FACTOR_47322 3

int aplicar_limite47322(int valor) {
    if (valor > LIMITE_47322) return LIMITE_47322;
    return valor * FACTOR_47322;
}
