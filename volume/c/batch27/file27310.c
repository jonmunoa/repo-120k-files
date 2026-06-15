// fichero 27310 -- macros y constantes -- MODIFICADO
#define LIMITE_27310 27510
#define FACTOR_27310 2

int aplicar_limite27310(int valor) {
    if (valor > LIMITE_27310) return LIMITE_27310;
    return valor * FACTOR_27310;
}
