// fichero 23177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23177;

Registro23177 crear_registro23177(int id) {
    Registro23177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
