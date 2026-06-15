// fichero 24390 -- macros y constantes -- MODIFICADO
#define LIMITE_24390 24590
#define FACTOR_24390 2

int aplicar_limite24390(int valor) {
    if (valor > LIMITE_24390) return LIMITE_24390;
    return valor * FACTOR_24390;
}
