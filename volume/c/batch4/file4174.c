// fichero 4174 -- macros y constantes
#define LIMITE_4174 4274
#define FACTOR_4174 5

int aplicar_limite4174(int valor) {
    if (valor > LIMITE_4174) return LIMITE_4174;
    return valor * FACTOR_4174;
}
