// fichero 5390 -- macros y constantes -- MODIFICADO
#define LIMITE_5390 5590
#define FACTOR_5390 2

int aplicar_limite5390(int valor) {
    if (valor > LIMITE_5390) return LIMITE_5390;
    return valor * FACTOR_5390;
}
