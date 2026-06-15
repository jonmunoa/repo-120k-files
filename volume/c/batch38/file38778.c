// fichero 38778 -- macros y constantes -- MODIFICADO
#define LIMITE_38778 38978
#define FACTOR_38778 5

int aplicar_limite38778(int valor) {
    if (valor > LIMITE_38778) return LIMITE_38778;
    return valor * FACTOR_38778;
}
