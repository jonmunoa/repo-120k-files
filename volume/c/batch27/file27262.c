// fichero 27262 -- macros y constantes -- MODIFICADO
#define LIMITE_27262 27462
#define FACTOR_27262 4

int aplicar_limite27262(int valor) {
    if (valor > LIMITE_27262) return LIMITE_27262;
    return valor * FACTOR_27262;
}
