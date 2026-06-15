// fichero 24650 -- macros y constantes -- MODIFICADO
#define LIMITE_24650 24850
#define FACTOR_24650 2

int aplicar_limite24650(int valor) {
    if (valor > LIMITE_24650) return LIMITE_24650;
    return valor * FACTOR_24650;
}
