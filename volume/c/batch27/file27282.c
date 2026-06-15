// fichero 27282 -- macros y constantes -- MODIFICADO
#define LIMITE_27282 27482
#define FACTOR_27282 4

int aplicar_limite27282(int valor) {
    if (valor > LIMITE_27282) return LIMITE_27282;
    return valor * FACTOR_27282;
}
