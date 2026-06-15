// fichero 24150 -- macros y constantes -- MODIFICADO
#define LIMITE_24150 24350
#define FACTOR_24150 2

int aplicar_limite24150(int valor) {
    if (valor > LIMITE_24150) return LIMITE_24150;
    return valor * FACTOR_24150;
}
