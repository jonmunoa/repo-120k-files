// fichero 41662 -- macros y constantes -- MODIFICADO
#define LIMITE_41662 41862
#define FACTOR_41662 4

int aplicar_limite41662(int valor) {
    if (valor > LIMITE_41662) return LIMITE_41662;
    return valor * FACTOR_41662;
}
