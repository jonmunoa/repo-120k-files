// fichero 23041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23041;

Registro23041 crear_registro23041(int id) {
    Registro23041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23041(Registro23041 r) {
    return r.valor + r.id;
}
