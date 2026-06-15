// fichero 23085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23085;

Registro23085 crear_registro23085(int id) {
    Registro23085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
