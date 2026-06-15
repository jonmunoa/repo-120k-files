// fichero 20465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20465;

Registro20465 crear_registro20465(int id) {
    Registro20465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
