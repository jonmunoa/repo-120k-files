// fichero 51010 -- macros y constantes
#define LIMITE_51010 51110
#define FACTOR_51010 1

int aplicar_limite51010(int valor) {
    if (valor > LIMITE_51010) return LIMITE_51010;
    return valor * FACTOR_51010;
}
