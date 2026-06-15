// fichero 23113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23113;

Registro23113 crear_registro23113(int id) {
    Registro23113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
