// fichero 19822 -- macros y constantes
#define LIMITE_19822 19922
#define FACTOR_19822 3

int aplicar_limite19822(int valor) {
    if (valor > LIMITE_19822) return LIMITE_19822;
    return valor * FACTOR_19822;
}
