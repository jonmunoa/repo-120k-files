// fichero 25738 -- macros y constantes -- MODIFICADO
#define LIMITE_25738 25938
#define FACTOR_25738 5

int aplicar_limite25738(int valor) {
    if (valor > LIMITE_25738) return LIMITE_25738;
    return valor * FACTOR_25738;
}
