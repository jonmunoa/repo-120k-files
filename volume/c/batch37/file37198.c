// fichero 37198 -- macros y constantes -- MODIFICADO
#define LIMITE_37198 37398
#define FACTOR_37198 5

int aplicar_limite37198(int valor) {
    if (valor > LIMITE_37198) return LIMITE_37198;
    return valor * FACTOR_37198;
}
