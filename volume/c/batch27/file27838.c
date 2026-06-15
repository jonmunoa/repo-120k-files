// fichero 27838 -- macros y constantes -- MODIFICADO
#define LIMITE_27838 28038
#define FACTOR_27838 5

int aplicar_limite27838(int valor) {
    if (valor > LIMITE_27838) return LIMITE_27838;
    return valor * FACTOR_27838;
}
