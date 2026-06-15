// fichero 1161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1161;

Registro1161 crear_registro1161(int id) {
    Registro1161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
