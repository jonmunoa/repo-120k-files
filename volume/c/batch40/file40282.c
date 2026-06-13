// fichero 40282 -- macros y constantes
#define LIMITE_40282 40382
#define FACTOR_40282 3

int aplicar_limite40282(int valor) {
    if (valor > LIMITE_40282) return LIMITE_40282;
    return valor * FACTOR_40282;
}
