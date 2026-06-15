// fichero 46662 -- macros y constantes -- MODIFICADO
#define LIMITE_46662 46862
#define FACTOR_46662 4

int aplicar_limite46662(int valor) {
    if (valor > LIMITE_46662) return LIMITE_46662;
    return valor * FACTOR_46662;
}
