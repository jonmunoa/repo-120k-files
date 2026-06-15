// fichero 42662 -- macros y constantes -- MODIFICADO
#define LIMITE_42662 42862
#define FACTOR_42662 4

int aplicar_limite42662(int valor) {
    if (valor > LIMITE_42662) return LIMITE_42662;
    return valor * FACTOR_42662;
}
