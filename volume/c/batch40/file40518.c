// fichero 40518 -- macros y constantes -- MODIFICADO
#define LIMITE_40518 40718
#define FACTOR_40518 5

int aplicar_limite40518(int valor) {
    if (valor > LIMITE_40518) return LIMITE_40518;
    return valor * FACTOR_40518;
}
