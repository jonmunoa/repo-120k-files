// fichero 31662 -- macros y constantes -- MODIFICADO
#define LIMITE_31662 31862
#define FACTOR_31662 4

int aplicar_limite31662(int valor) {
    if (valor > LIMITE_31662) return LIMITE_31662;
    return valor * FACTOR_31662;
}
