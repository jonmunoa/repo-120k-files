// fichero 27810 -- macros y constantes
#define LIMITE_27810 27910
#define FACTOR_27810 1

int aplicar_limite27810(int valor) {
    if (valor > LIMITE_27810) return LIMITE_27810;
    return valor * FACTOR_27810;
}
