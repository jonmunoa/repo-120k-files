// fichero 27910 -- macros y constantes -- MODIFICADO
#define LIMITE_27910 28110
#define FACTOR_27910 2

int aplicar_limite27910(int valor) {
    if (valor > LIMITE_27910) return LIMITE_27910;
    return valor * FACTOR_27910;
}
