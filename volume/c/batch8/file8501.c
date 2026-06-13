// fichero 8501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8501;

Registro8501 crear_registro8501(int id) {
    Registro8501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8501(Registro8501 r) {
    return r.valor + r.id;
}
