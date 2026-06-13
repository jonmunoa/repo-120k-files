// fichero 40846 -- macros y constantes
#define LIMITE_40846 40946
#define FACTOR_40846 2

int aplicar_limite40846(int valor) {
    if (valor > LIMITE_40846) return LIMITE_40846;
    return valor * FACTOR_40846;
}
