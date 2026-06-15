// fichero 9133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9133;

Registro9133 crear_registro9133(int id) {
    Registro9133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
