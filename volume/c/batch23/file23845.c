// fichero 23845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23845;

Registro23845 crear_registro23845(int id) {
    Registro23845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
