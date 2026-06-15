// fichero 23781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23781;

Registro23781 crear_registro23781(int id) {
    Registro23781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
