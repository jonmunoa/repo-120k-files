// fichero 4150 -- macros y constantes -- MODIFICADO
#define LIMITE_4150 4350
#define FACTOR_4150 2

int aplicar_limite4150(int valor) {
    if (valor > LIMITE_4150) return LIMITE_4150;
    return valor * FACTOR_4150;
}
