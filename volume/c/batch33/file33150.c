// fichero 33150 -- macros y constantes -- MODIFICADO
#define LIMITE_33150 33350
#define FACTOR_33150 2

int aplicar_limite33150(int valor) {
    if (valor > LIMITE_33150) return LIMITE_33150;
    return valor * FACTOR_33150;
}
