// fichero 38650 -- macros y constantes -- MODIFICADO
#define LIMITE_38650 38850
#define FACTOR_38650 2

int aplicar_limite38650(int valor) {
    if (valor > LIMITE_38650) return LIMITE_38650;
    return valor * FACTOR_38650;
}
