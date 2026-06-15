// fichero 23129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23129;

Registro23129 crear_registro23129(int id) {
    Registro23129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
