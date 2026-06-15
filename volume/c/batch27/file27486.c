// fichero 27486 -- macros y constantes -- MODIFICADO
#define LIMITE_27486 27686
#define FACTOR_27486 3

int aplicar_limite27486(int valor) {
    if (valor > LIMITE_27486) return LIMITE_27486;
    return valor * FACTOR_27486;
}
