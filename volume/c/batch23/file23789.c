// fichero 23789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23789;

Registro23789 crear_registro23789(int id) {
    Registro23789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
