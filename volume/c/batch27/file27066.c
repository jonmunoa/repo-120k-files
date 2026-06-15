// fichero 27066 -- macros y constantes -- MODIFICADO
#define LIMITE_27066 27266
#define FACTOR_27066 3

int aplicar_limite27066(int valor) {
    if (valor > LIMITE_27066) return LIMITE_27066;
    return valor * FACTOR_27066;
}
