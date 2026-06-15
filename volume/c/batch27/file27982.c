// fichero 27982 -- macros y constantes -- MODIFICADO
#define LIMITE_27982 28182
#define FACTOR_27982 4

int aplicar_limite27982(int valor) {
    if (valor > LIMITE_27982) return LIMITE_27982;
    return valor * FACTOR_27982;
}
