// fichero 350 -- macros y constantes -- MODIFICADO
#define LIMITE_350 550
#define FACTOR_350 2

int aplicar_limite350(int valor) {
    if (valor > LIMITE_350) return LIMITE_350;
    return valor * FACTOR_350;
}
