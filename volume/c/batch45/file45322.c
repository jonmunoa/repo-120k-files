// fichero 45322 -- macros y constantes -- MODIFICADO
#define LIMITE_45322 45522
#define FACTOR_45322 4

int aplicar_limite45322(int valor) {
    if (valor > LIMITE_45322) return LIMITE_45322;
    return valor * FACTOR_45322;
}
