// fichero 20893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20893;

Registro20893 crear_registro20893(int id) {
    Registro20893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
