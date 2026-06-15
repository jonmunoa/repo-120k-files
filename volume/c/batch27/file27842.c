// fichero 27842 -- macros y constantes -- MODIFICADO
#define LIMITE_27842 28042
#define FACTOR_27842 4

int aplicar_limite27842(int valor) {
    if (valor > LIMITE_27842) return LIMITE_27842;
    return valor * FACTOR_27842;
}
