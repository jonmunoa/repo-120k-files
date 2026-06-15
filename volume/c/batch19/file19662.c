// fichero 19662 -- macros y constantes -- MODIFICADO
#define LIMITE_19662 19862
#define FACTOR_19662 4

int aplicar_limite19662(int valor) {
    if (valor > LIMITE_19662) return LIMITE_19662;
    return valor * FACTOR_19662;
}
