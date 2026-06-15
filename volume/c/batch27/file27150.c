// fichero 27150 -- macros y constantes -- MODIFICADO
#define LIMITE_27150 27350
#define FACTOR_27150 2

int aplicar_limite27150(int valor) {
    if (valor > LIMITE_27150) return LIMITE_27150;
    return valor * FACTOR_27150;
}
