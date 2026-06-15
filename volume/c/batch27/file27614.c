// fichero 27614 -- macros y constantes -- MODIFICADO
#define LIMITE_27614 27814
#define FACTOR_27614 6

int aplicar_limite27614(int valor) {
    if (valor > LIMITE_27614) return LIMITE_27614;
    return valor * FACTOR_27614;
}
