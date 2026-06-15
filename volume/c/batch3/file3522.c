// fichero 3522 -- macros y constantes -- MODIFICADO
#define LIMITE_3522 3722
#define FACTOR_3522 4

int aplicar_limite3522(int valor) {
    if (valor > LIMITE_3522) return LIMITE_3522;
    return valor * FACTOR_3522;
}
