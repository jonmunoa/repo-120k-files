// fichero 74 -- macros y constantes -- MODIFICADO
#define LIMITE_74 274
#define FACTOR_74 6

int aplicar_limite74(int valor) {
    if (valor > LIMITE_74) return LIMITE_74;
    return valor * FACTOR_74;
}
