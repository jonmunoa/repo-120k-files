// fichero 24198 -- macros y constantes -- MODIFICADO
#define LIMITE_24198 24398
#define FACTOR_24198 5

int aplicar_limite24198(int valor) {
    if (valor > LIMITE_24198) return LIMITE_24198;
    return valor * FACTOR_24198;
}
