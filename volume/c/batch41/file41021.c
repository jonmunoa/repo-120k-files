// fichero 41021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41021;

Registro41021 crear_registro41021(int id) {
    Registro41021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
