// fichero 33522 -- macros y constantes -- MODIFICADO
#define LIMITE_33522 33722
#define FACTOR_33522 4

int aplicar_limite33522(int valor) {
    if (valor > LIMITE_33522) return LIMITE_33522;
    return valor * FACTOR_33522;
}
