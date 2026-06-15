// fichero 38322 -- macros y constantes -- MODIFICADO
#define LIMITE_38322 38522
#define FACTOR_38322 4

int aplicar_limite38322(int valor) {
    if (valor > LIMITE_38322) return LIMITE_38322;
    return valor * FACTOR_38322;
}
