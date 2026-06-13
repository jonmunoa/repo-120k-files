// fichero 5546 -- macros y constantes
#define LIMITE_5546 5646
#define FACTOR_5546 2

int aplicar_limite5546(int valor) {
    if (valor > LIMITE_5546) return LIMITE_5546;
    return valor * FACTOR_5546;
}
