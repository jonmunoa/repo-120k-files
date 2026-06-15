// fichero 40738 -- macros y constantes -- MODIFICADO
#define LIMITE_40738 40938
#define FACTOR_40738 5

int aplicar_limite40738(int valor) {
    if (valor > LIMITE_40738) return LIMITE_40738;
    return valor * FACTOR_40738;
}
