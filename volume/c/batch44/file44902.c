// fichero 44902 -- macros y constantes
#define LIMITE_44902 45002
#define FACTOR_44902 3

int aplicar_limite44902(int valor) {
    if (valor > LIMITE_44902) return LIMITE_44902;
    return valor * FACTOR_44902;
}
