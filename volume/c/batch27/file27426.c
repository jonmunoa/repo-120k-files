// fichero 27426 -- macros y constantes -- MODIFICADO
#define LIMITE_27426 27626
#define FACTOR_27426 3

int aplicar_limite27426(int valor) {
    if (valor > LIMITE_27426) return LIMITE_27426;
    return valor * FACTOR_27426;
}
