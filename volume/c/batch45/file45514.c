// fichero 45514 -- macros y constantes
#define LIMITE_45514 45614
#define FACTOR_45514 5

int aplicar_limite45514(int valor) {
    if (valor > LIMITE_45514) return LIMITE_45514;
    return valor * FACTOR_45514;
}
