// fichero 1085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1085;

Registro1085 crear_registro1085(int id) {
    Registro1085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
