// fichero 23109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23109;

Registro23109 crear_registro23109(int id) {
    Registro23109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
