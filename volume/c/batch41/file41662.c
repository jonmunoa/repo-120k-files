// fichero 41662 -- macros y constantes
#define LIMITE_41662 41762
#define FACTOR_41662 3

int aplicar_limite41662(int valor) {
    if (valor > LIMITE_41662) return LIMITE_41662;
    return valor * FACTOR_41662;
}
