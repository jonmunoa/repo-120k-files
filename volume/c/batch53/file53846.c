// fichero 53846 -- macros y constantes
#define LIMITE_53846 53946
#define FACTOR_53846 2

int aplicar_limite53846(int valor) {
    if (valor > LIMITE_53846) return LIMITE_53846;
    return valor * FACTOR_53846;
}
