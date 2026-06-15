// fichero 1277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1277;

Registro1277 crear_registro1277(int id) {
    Registro1277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
