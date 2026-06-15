// fichero 23345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23345;

Registro23345 crear_registro23345(int id) {
    Registro23345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
