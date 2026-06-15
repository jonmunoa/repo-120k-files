// fichero 27222 -- macros y constantes -- MODIFICADO
#define LIMITE_27222 27422
#define FACTOR_27222 4

int aplicar_limite27222(int valor) {
    if (valor > LIMITE_27222) return LIMITE_27222;
    return valor * FACTOR_27222;
}
