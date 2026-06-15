// fichero 27374 -- macros y constantes -- MODIFICADO
#define LIMITE_27374 27574
#define FACTOR_27374 6

int aplicar_limite27374(int valor) {
    if (valor > LIMITE_27374) return LIMITE_27374;
    return valor * FACTOR_27374;
}
