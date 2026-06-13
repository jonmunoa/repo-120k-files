// fichero 27838 -- macros y constantes
#define LIMITE_27838 27938
#define FACTOR_27838 4

int aplicar_limite27838(int valor) {
    if (valor > LIMITE_27838) return LIMITE_27838;
    return valor * FACTOR_27838;
}
