// fichero 39958 -- macros y constantes -- MODIFICADO
#define LIMITE_39958 40158
#define FACTOR_39958 5

int aplicar_limite39958(int valor) {
    if (valor > LIMITE_39958) return LIMITE_39958;
    return valor * FACTOR_39958;
}
