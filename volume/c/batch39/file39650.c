// fichero 39650 -- macros y constantes -- MODIFICADO
#define LIMITE_39650 39850
#define FACTOR_39650 2

int aplicar_limite39650(int valor) {
    if (valor > LIMITE_39650) return LIMITE_39650;
    return valor * FACTOR_39650;
}
