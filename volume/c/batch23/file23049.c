// fichero 23049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23049;

Registro23049 crear_registro23049(int id) {
    Registro23049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
