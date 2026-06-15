// fichero 5770 -- macros y constantes -- MODIFICADO
#define LIMITE_5770 5970
#define FACTOR_5770 2

int aplicar_limite5770(int valor) {
    if (valor > LIMITE_5770) return LIMITE_5770;
    return valor * FACTOR_5770;
}
