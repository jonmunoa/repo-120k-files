// fichero 44090 -- macros y constantes -- MODIFICADO
#define LIMITE_44090 44290
#define FACTOR_44090 2

int aplicar_limite44090(int valor) {
    if (valor > LIMITE_44090) return LIMITE_44090;
    return valor * FACTOR_44090;
}
