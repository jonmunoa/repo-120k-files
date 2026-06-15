// fichero 23941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23941;

Registro23941 crear_registro23941(int id) {
    Registro23941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
