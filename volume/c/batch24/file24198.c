// fichero 24198 -- macros y constantes
#define LIMITE_24198 24298
#define FACTOR_24198 4

int aplicar_limite24198(int valor) {
    if (valor > LIMITE_24198) return LIMITE_24198;
    return valor * FACTOR_24198;
}
