// fichero 49822 -- macros y constantes -- MODIFICADO
#define LIMITE_49822 50022
#define FACTOR_49822 4

int aplicar_limite49822(int valor) {
    if (valor > LIMITE_49822) return LIMITE_49822;
    return valor * FACTOR_49822;
}
