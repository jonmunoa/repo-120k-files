// fichero 49318 -- macros y constantes -- MODIFICADO
#define LIMITE_49318 49518
#define FACTOR_49318 5

int aplicar_limite49318(int valor) {
    if (valor > LIMITE_49318) return LIMITE_49318;
    return valor * FACTOR_49318;
}
