// fichero 1945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1945;

Registro1945 crear_registro1945(int id) {
    Registro1945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
