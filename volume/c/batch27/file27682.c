// fichero 27682 -- macros y constantes
#define LIMITE_27682 27782
#define FACTOR_27682 3

int aplicar_limite27682(int valor) {
    if (valor > LIMITE_27682) return LIMITE_27682;
    return valor * FACTOR_27682;
}
