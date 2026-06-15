// fichero 39950 -- macros y constantes -- MODIFICADO
#define LIMITE_39950 40150
#define FACTOR_39950 2

int aplicar_limite39950(int valor) {
    if (valor > LIMITE_39950) return LIMITE_39950;
    return valor * FACTOR_39950;
}
