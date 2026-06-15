// fichero 23485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23485;

Registro23485 crear_registro23485(int id) {
    Registro23485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
