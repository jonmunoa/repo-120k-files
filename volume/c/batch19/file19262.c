// fichero 19262 -- macros y constantes -- MODIFICADO
#define LIMITE_19262 19462
#define FACTOR_19262 4

int aplicar_limite19262(int valor) {
    if (valor > LIMITE_19262) return LIMITE_19262;
    return valor * FACTOR_19262;
}
