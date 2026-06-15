// fichero 13662 -- macros y constantes -- MODIFICADO
#define LIMITE_13662 13862
#define FACTOR_13662 4

int aplicar_limite13662(int valor) {
    if (valor > LIMITE_13662) return LIMITE_13662;
    return valor * FACTOR_13662;
}
