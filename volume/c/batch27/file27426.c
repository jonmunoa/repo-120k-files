// fichero 27426 -- macros y constantes
#define LIMITE_27426 27526
#define FACTOR_27426 2

int aplicar_limite27426(int valor) {
    if (valor > LIMITE_27426) return LIMITE_27426;
    return valor * FACTOR_27426;
}
