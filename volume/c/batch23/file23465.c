// fichero 23465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23465;

Registro23465 crear_registro23465(int id) {
    Registro23465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
