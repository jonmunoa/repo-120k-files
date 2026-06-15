// fichero 277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro277;

Registro277 crear_registro277(int id) {
    Registro277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
