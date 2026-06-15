// fichero 23913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23913;

Registro23913 crear_registro23913(int id) {
    Registro23913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
