// fichero 44902 -- macros y constantes -- MODIFICADO
#define LIMITE_44902 45102
#define FACTOR_44902 4

int aplicar_limite44902(int valor) {
    if (valor > LIMITE_44902) return LIMITE_44902;
    return valor * FACTOR_44902;
}
