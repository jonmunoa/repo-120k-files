// fichero 19822 -- macros y constantes -- MODIFICADO
#define LIMITE_19822 20022
#define FACTOR_19822 4

int aplicar_limite19822(int valor) {
    if (valor > LIMITE_19822) return LIMITE_19822;
    return valor * FACTOR_19822;
}
