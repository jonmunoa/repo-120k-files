// fichero 23425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23425;

Registro23425 crear_registro23425(int id) {
    Registro23425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23425(Registro23425 r) {
    return r.valor + r.id;
}
