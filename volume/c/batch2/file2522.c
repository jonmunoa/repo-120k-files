// fichero 2522 -- macros y constantes -- MODIFICADO
#define LIMITE_2522 2722
#define FACTOR_2522 4

int aplicar_limite2522(int valor) {
    if (valor > LIMITE_2522) return LIMITE_2522;
    return valor * FACTOR_2522;
}
