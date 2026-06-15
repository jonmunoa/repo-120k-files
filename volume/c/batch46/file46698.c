// fichero 46698 -- macros y constantes -- MODIFICADO
#define LIMITE_46698 46898
#define FACTOR_46698 5

int aplicar_limite46698(int valor) {
    if (valor > LIMITE_46698) return LIMITE_46698;
    return valor * FACTOR_46698;
}
