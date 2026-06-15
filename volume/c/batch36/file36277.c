// fichero 36277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36277;

Registro36277 crear_registro36277(int id) {
    Registro36277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
