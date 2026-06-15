// fichero 23857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23857;

Registro23857 crear_registro23857(int id) {
    Registro23857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
